#include "cardboad.h"
#include <stdlib.h>
#include <stdio.h>

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

void	prompt (t_room piece)
{
  char	*tmp;

  print_map(piece.map);
  my_putstr("A vous >");
  tmp = readline();
  tmp = my_strlowcase(tmp);
  check_fun ( tmp, piece);
}

void	check_fun (char *tmp, t_room piece)
{
  int	i = 0;
  int	ind;

  ind = 0;
  t_flag	fun[10] =
    {
      {"a", &gauche},
      {"d", &droite},
      {"w", &haut},
      {"s", &bas},
      {"c", &accroupi},
      {" ", &key_find},
      {"e", &open_door},
      {"h", &help},
      {"exit", &quit}
    };
  while (i < 9)
    {

      if (my_strcmp(tmp, fun[i].str) == 0)
	{
	  ind = 1;
	  free(tmp);
	  fun[i].f(piece);
	}
      i = i + 1;
    }

  if (ind == 0)
    {
      my_putstr("Erreur : Taper 'h' pour plus d'information \n");
      prompt(piece);
    }
}

t_room		init_room(char **map_actuelle, t_room *room_suiv)
{
  t_room	piece;

  piece.map = map_actuelle;
  piece.next = room_suiv;
  return piece;
}
