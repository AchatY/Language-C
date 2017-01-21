#include	"cardboad.h"

void	droite(char **map)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(map);
  
  if (map[tab[0]][tab[1] + 1] != 'X')
    {
      map[tab[0]][tab[1] + 1] = 'i';
      map[tab[0]][tab[1]] = ' ';
    }
  else
    my_putstr("Erreur : Taper 'h' pour plus d'information \n");
  free(tab);
  prompt (map);
}

void	gauche(char **map)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(map);
  
  if (map[tab[0]][tab[1] - 1] != 'X')
    {
      map[tab[0]][tab[1] - 1] = 'i';
      map[tab[0]][tab[1]] = ' ';
    }
  else
    my_putstr("Erreur : Taper 'h' pour plus d'information \n");
  free(tab);
  prompt (map);
}

void	bas(char **map)
{
  int *tab;
  
  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(map);
  if (map[tab[0] + 1][tab[1]] != 'X')
    {
      map[tab[0] + 1][tab[1]] = 'i';
      map[tab[0]][tab[1]] = ' ';
    }
  else
    my_putstr("Erreur : Taper 'h' pour plus d'information \n");
  free(tab);
  prompt (map);
}

void	haut(char **map)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(map);
  if ((tab[0] - 1) >= 0)
    {
      if (map[tab[0] - 1][tab[1]] != 'X')
	{
	  map[tab[0] - 1][tab[1]] = 'i';
	  map[tab[0]][tab[1]] = ' ';
	}
      else
	  my_putstr("Erreur : Taper 'h' pour plus d'information \n");
	  free(tab);
     prompt (map);
    }
  else
    {
      my_putstr("To be continued \n");
      free(tab);
      sleep(1);
    }
}
