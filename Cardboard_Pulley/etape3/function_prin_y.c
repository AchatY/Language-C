#include "cardboad.h"

int	*coordonnee_yellow(char **map)
{
  int	j;
  int	i;
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  i = 0;
  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  if (map[j][i] == '!')
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

t_room	init_room(char **map_actuelle, t_room *room_suiv, int level)
{
  t_room	piece;

  piece.map = map_actuelle;
  piece.next = room_suiv;
  piece.level = level;
  return piece;
}

int	help(t_room piece)
{
  my_putstr("\n*************************************************************************************\n");
  my_putstr("*                                                                                   *\n");
  my_putstr("*    'X' correspond a un mur ne fonçez pas dedans                                   *\n");
  my_putstr("*    'H' est un ostacle accroupissez vous avec 'c'                                  *\n");
  my_putstr("*    'K' correspond a une clé pour la recuper cliquer sur espace                    *\n");
  my_putstr("*    'x' est une porte fermée pour l'ouvir faut avoir la clé et cliquer sur 'e'     *\n");
  my_putstr("*    'a'->gauche 'w'->haut 'd'->droite 's'->bas'                                    *\n");
  my_putstr("*                                                                                   *\n");
  my_putstr("*************************************************************************************\n\n");
  return 0;
  prompt(piece);
}
