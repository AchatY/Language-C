#include "cardboad.h"
#include <stdlib.h>
#include <stdio.h>

int	*coordonnee(char **map)
{
  int	j;
  int	i;
  int	*tab;

  tab = malloc (sizeof(int) * 2);
  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  if (map[j][i] == 'i')
	    {
	      tab[0]=j;
	      tab[1]=i;
	    }
	  else if (map[j][i] == 'O')
	    {
	      tab[0]=j;
	      tab[1]=i;
	    }
	  i++;
	}
      j++;
    }
  return tab;
}

void	prompt(char **map)
{
  char	*tmp;

  print_map(map);
  my_putstr("Votre Tour>");
  tmp = readline();
  tmp = my_strlowcase(tmp);
  check_fun (tmp, map);
}

void	check_fun(char *tmp, char **map)
{
  int	i = 0;
  int	ind;

  ind = 0;
  t_flag        fun[7] =
    {
      {"a", &gauche},
      {"d", &droite},
      {"w", &haut},
      {"s", &bas},
      {"h", &help},
      {"exit", &quit}
    };
  while (i < 6)
    {
      if (my_strcmp(tmp, fun[i].str) == 0)
	{
	  ind = 1;
	  free(tmp);
	  fun[i].f(map);
	}
      i = i + 1;
    }
  if (ind == 0)
    {
      my_putstr("Erreur : Taper 'h' pour plus d'information \n");
      free(tmp);
      prompt(map);
    }
}
