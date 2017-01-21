#include "cardboad.h"

void	act(int *tab, char **map){

int	random;
int	i;
t_enmy       fun[3] =
{
    {0, &turn},
    {1, &front}
};

i = 0;
random = rand() % 2;
  while (i < 2)
    {
      if (random == fun[i].act)
	    fun[i].f(map, tab);
      i = i + 1;
    }
}

void	front(char **map, int *tab)
{
if (map[tab[0]][tab[1]] == '<')
 {
    if (map[tab[0]][tab[1] + 1] == ' ')
    {
      map[tab[0]][tab[1] + 1] = '<';
      map[tab[0]][tab[1]] = ' ';
    }
    else
      turn(map, tab);
 }
else if (map[tab[0]][tab[1]] == '>')
 {
    if (map[tab[0]][tab[1] - 1] == ' ')
     {
        map[tab[0]][tab[1] - 1] = '>';
        map[tab[0]][tab[1]] = ' ';
     }
    else
        turn(map, tab);
 }
else if (map[tab[0]][tab[1]] == '^')
 {
    if (map[tab[0] + 1][tab[1]] == ' ')
      {
        map[tab[0] + 1][tab[1]] = '^';
        map[tab[0]][tab[1]] = ' ';
      }
    else
        turn(map, tab);
 }
else if (map[tab[0]][tab[1]] == 'v')
 {
     if (map[tab[0] - 1][tab[1]] == ' ')
       {
         map[tab[0] - 1][tab[1]] = 'v';
         map[tab[0]][tab[1]] = ' ';
       }
     else
         turn(map, tab);
}
}


void	turn(char **map, int *tab)
{
int	random;

random = rand() % 2;
if ((map[tab[0]][tab[1]] == '<') || (map[tab[0]][tab[1]] == '>'))
 {
    if ((random == 0) && (map[tab[0] - 1][tab[1]] == ' '))
      map[tab[0]][tab[1]] = 'v';
    else if ((random == 1) && (map[tab[0] + 1][tab[1]] == ' '))
      map[tab[0]][tab[1]] = '^';
    else if ((map[tab[0] + 1][tab[1]] != ' ')
     && (map[tab[0] - 1][tab[1]] != ' ')
     && ((map[tab[0]][tab[1] - 1] != ' ') || (map[tab[0]][tab[1] + 1] != ' ')))
       map[tab[0]][tab[1]] = '^';
    else
      front(map, tab);
 }
else if ((map[tab[0]][tab[1]] == '^') || (map[tab[0]][tab[1]] == 'v'))
 {
    if ((random == 0) && (map[tab[0]][tab[1] - 1] == ' '))
      map[tab[0]][tab[1]] = '>';
    else if ((random == 1) && (map[tab[0]][tab[1] + 1] == ' '))
      map[tab[0]][tab[1]] = '<';
    else if ((map[tab[0]][tab[1] + 1] != ' ')
    && (map[tab[0]][tab[1] - 1] != ' ')
    && ((map[tab[0] + 1][tab[1]] != ' ') || (map[tab[0] - 1][tab[1]] != ' ')))
      map[tab[0]][tab[1]] = '<';
    else
      front(map, tab);
 }
}
