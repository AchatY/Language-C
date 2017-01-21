#include "cardboad.h"
#include <stdlib.h>
#include <stdio.h>

char	*dir[600];
int	yellow_pos = 0;
  
int	*coordonnee(char **map)
{
  int	j;
  int	i;
  int	*tab;
  int	*tab1;

  tab = malloc (sizeof(int) * 3);
  tab1 = malloc (sizeof(int) * 3);
  i = 0;
  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  if ((map[j][i] == 'i') || (map[j][i] == '_'))
	    {
	      tab[0]=j;
	      tab[1]=i;
	    }
	  else if (map[j][i] == 'O')
	    {
	      tab[0]=j;
	      tab[1]=i;
	    }
	  else if (map[j][i] == 'K')
	    {
	      tab1[0]=j;
	      tab1[1]=i;
	    }
	  i++;
	}
      j++;
    }
  if (tab[0])
    return tab;
  return tab1;
}

void	prompt(t_room piece)
{
  char	*tmp;
  int	vu;
  
  print_map(piece.map);
  if ( piece.level == 3 )
    {
      yellow_pos++;
      vu = vision_enmy(piece.map); 
      if ((yellow_pos % 2) == 0)
	enmy(piece.map);
      vu = vision_enmy(piece.map); 
      if (vu)
	{
	  print_map(piece.map);
	  my_putstr("\n   ****    Le gardien vous a Vu  ****  \n\n");
	  my_putstr("\n     ****     Game Over     ****    \n\n");
	  return;
	}
    }
  my_putstr("A vous >");
  tmp = readline();
  tmp = my_strlowcase(tmp);
  check_fun ( tmp, piece);
}

void	check_fun(char *tmp, t_room piece)
{
  int	i;
  int	ind;
  int	cmp;
  static int	a = 0;

  i = 0;
  cmp = 3;
  ind = 0;
  t_flag        fun[10] =
    {
      {"a", &gauche},
      {"d", &droite},
      {"w", &haut},
      {"s", &bas},
      {"c", &accroupi},
      {" ", &key_find},
      {"e", &open_door},
      {"exit", &quit},
      {"h", &help}
    };
  if (piece.level == 3 )
    piece.map = check_y(piece, (a + 1));
  while (i < 9)
    {
      if (my_strcmp(tmp, fun[i].str) == 0 && piece.level != 3)
	{
	  ind = 1;
	  cmp = fun[i].f(piece);
	  if (cmp == 0)
	    prompt(piece);
	}
      else if (my_strcmp(tmp, fun[i].str) == 0 && piece.level == 3)
	{
	  ind = 1;
	  dir[a] = tmp;
	  a++;
	  cmp = fun[i].f(piece);
	  if (cmp == 0)
	    {
	      a--;
	      prompt(piece);
	    }
	}
      i = i + 1;
    }
  if (ind == 0)
    {
      my_putstr("Erreur : Taper 'h' pour plus d'information \n");
      prompt(piece);
    }
}

char	**check_y(t_room piece, int a)
{
  char	*tmp_y;
  static int	ind_y = 0;
  char	**map_tmp;
  int	j;

      t_flag_y        fun_yellow[4] =
	{
	  {"a", &gauche_y},
	  {"d", &droite_y},
	  {"w", &haut_y},
	  {"s", &bas_y}
	};
      map_tmp = piece.map;
      if (a == 2 && (yellow_pos % 2) == 0)
	map_tmp = droite_y(piece);
      else if ((yellow_pos % 2) == 0 && a > 2)
	{

	  tmp_y = dir[ind_y];
	  ind_y++;
	  j = 0;
	  while (j < 4)
	    {
	      if (my_strcmp(tmp_y, fun_yellow[j].str) == 0)
		map_tmp = fun_yellow[j].f(piece);
	      j++;
	    }
	}
      return map_tmp;
}
