#include "cardboad.h"

char	**droite_y(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee_yellow(piece.map);

  if (piece.map[tab[0]][tab[1] + 1] == ' ')
    {
      piece.map[tab[0]][tab[1] + 1] = '!';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0]][tab[1] + 1] == 'H')
    {
      piece.map[tab[0]][tab[1] + 2] = '!';
      piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0]][tab[1] + 1] == '>' ||
	   piece.map[tab[0]][tab[1] + 1] == '<' ||
	   piece.map[tab[0]][tab[1] + 1] == '^' ||
	   piece.map[tab[0]][tab[1] + 1] == 'v' ||
	   piece.map[tab[0]][tab[1] + 1] == 'i')
    {
      print_map(piece.map);
      my_putstr("\n     ****     Game Over     ****    \n\n ****  quelqu'un q bosculer Yellow Roster   **** \n \n");
      free(tab);
      return 0;
    }
  else
    my_putstr("Yellow peut pas aller a droite\n");
  free(tab);
  return piece.map;
}

char	**gauche_y(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee_yellow(piece.map);

  if (piece.map[tab[0]][tab[1] - 1] == ' ')
    {
      piece.map[tab[0]][tab[1] - 1] = '!';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0]][tab[1] - 1] == 'H')
    {
      piece.map[tab[0]][tab[1] - 2] = '!';
      piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0]][tab[1] - 1] == '>' ||
	   piece.map[tab[0]][tab[1] - 1] == '<' ||
	   piece.map[tab[0]][tab[1] - 1] == '^' ||
	   piece.map[tab[0]][tab[1] - 1] == 'v' ||
	   piece.map[tab[0]][tab[1] - 1] == 'i')
    {
      print_map(piece.map);
      my_putstr("\n     ****     Game Over     ****    \n\n ****  quelqu'un q bosculer Yellow Roster   **** \n \n");
      free(tab);
      return 0;
    }
  else
    my_putstr("Yellow peut pas aller a gauchen");
  free(tab);
  return piece.map;
}

char	**bas_y(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee_yellow(piece.map);

  if (piece.map[tab[0] + 1][tab[1]] == ' ')
    {
      piece.map[tab[0] + 1][tab[1]] = '!';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0] + 1][tab[1]] == 'H')
        {
          piece.map[tab[0] + 2][tab[1]] = '!';
          piece.map[tab[0]][tab[1]] = ' ';
        }
  else if (piece.map[tab[0] + 1][tab[1]] == '>' ||
	   piece.map[tab[0] + 1][tab[1]] == '<' ||
	   piece.map[tab[0] + 1][tab[1]] == '^' ||
	   piece.map[tab[0] + 1][tab[1]] == 'v' ||
	   piece.map[tab[0] + 1][tab[1]] == 'i')
    {
      print_map(piece.map);
      my_putstr("\n     ****     Game Over     ****    \n\n ****  quelqu'un q bosculer Yellow Roster   **** \n \n");
      free(tab);
      return 0;
    }
  else
      my_putstr("Yellow peut pas aller en bas\n");
  free(tab);
  return piece.map;
}

char	**haut_y(t_room piece)
{
  int	*tab;
  
  tab = malloc (sizeof(int) * 3);
  tab = coordonnee_yellow(piece.map);

  if (piece.map[tab[0] - 1][tab[1]] == ' ')
    {
      piece.map[tab[0] - 1][tab[1]] = '!';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0] - 1][tab[1]] == 'H')
    {
      piece.map[tab[0] - 2][tab[1]] = '!';
      piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0] + 1][tab[1]] == '>' ||
	   piece.map[tab[0] + 1][tab[1]] == '<' ||
	   piece.map[tab[0] + 1][tab[1]] == '^' ||
	   piece.map[tab[0] + 1][tab[1]] == 'v' ||
	   piece.map[tab[0] + 1][tab[1]] == 'i')
    {
      print_map(piece.map);
      my_putstr("\n     ****     Game Over     ****    \n\n ****  Quelqu'un a bosculé Yellow Roster   **** \n \n");
      free(tab);
      return 0;
    }
  else
    my_putstr("Yellow peut pas aller en haut\n");
  free(tab);
  return piece.map;
}

