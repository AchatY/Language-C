#include "cardboad.h"


int		vision(char **map, int *tab)
{
    char	get;
    int		i;
    int 	vu;

    get=map[tab[0]][tab[1]];
    t_angle       fun[5] =
    {
        {'v', &vision_haut},
        {'^', &vision_bas},
        {'<', &vision_droite},
        {'>', &vision_gauche}
    };
    i = 0;
    while (i < 4)
      {
	if (get == fun[i].str)
	  {
	    vu = fun[i].f(map, tab);
	  }
	i++;
      }
    return vu;
}

int	vision_droite(char **map, int *tab)
{
   int	vu;

   vu = 0;
   if ((map[tab[0]][tab[1] + 1] != 'X')
   || (map[tab[0]][tab[1] + 1] != 'x')
   || (map[tab[0]][tab[1] + 1] != 'H'))
   {
     if ((map[tab[0]][tab[1] + 1] == 'i')
	 || (map[tab[0]][tab[1] + 2] == 'i')
	 || (map[tab[0] + 1][tab[1] + 2] == 'i')
	 || (map[tab[0] - 1][tab[1] + 2] == 'i'))
       vu = 1;
   }
   else if (map[tab[0]][tab[1] + 1] == 'H')
     {
       if ((map[tab[0]][tab[1] + 2] == 'i')
	 || (map[tab[0] + 1][tab[1] + 2] == 'i')
	 || (map[tab[0] - 1][tab[1] + 2] == 'i'))
	 vu = 1;
     }
   return vu;
}

int	vision_gauche(char **map, int *tab)
{
   int	vu;

   vu = 0;
   if ((map[tab[0]][tab[1] - 1] != 'X')
   || (map[tab[0]][tab[1] - 1] != 'x')
   || (map[tab[0]][tab[1] - 1] != 'H'))
   {
     if ((map[tab[0]][tab[1] - 1] == 'i')
          || (map[tab[0]][tab[1] - 2] == 'i')
          || (map[tab[0] + 1][tab[1] - 2] == 'i')
          || (map[tab[0] - 1][tab[1] - 2] == 'i'))
        vu = 1;
   }
   else if (map[tab[0]][tab[1] - 1] == 'H')
   {
     if ((map[tab[0]][tab[1] - 2] == 'i')
   	  || (map[tab[0] + 1][tab[1] - 2] == 'i')
   	  || (map[tab[0] - 1][tab[1] - 2] == 'i'))
   	   vu = 1;
   }
   return vu;
}

int	vision_haut(char **map, int *tab)
{
   int	vu;

   vu = 0;
   if ((map[tab[0] - 1][tab[1]] != 'X')
   || (map[tab[0] - 1][tab[1]] != 'x')
   || (map[tab[0] - 1][tab[1]] != 'H'))
   {
     if ((map[tab[0] - 1][tab[1] - 1] == 'i')
          || (map[tab[0] - 2][tab[1]] == 'i')
          || (map[tab[0] - 2][tab[1] + 1] == 'i')
          || (map[tab[0] - 2][tab[1] - 1] == 'i'))
        vu = 1;
   }
   else if (map[tab[0] - 1][tab[1]] == 'H')
     {
       if ((map[tab[0] - 2][tab[1]] == 'i')
	 || (map[tab[0] - 2][tab[1] + 1] == 'i')
	 || (map[tab[0] - 2][tab[1] - 1] == 'i'))
	 vu = 1;
     }
   return vu;
}

int	vision_bas(char **map, int *tab)
{
   int	vu;

   vu = 0;
   if ((map[tab[0] + 1][tab[1]] != 'X')
   || (map[tab[0] + 1][tab[1]] != 'x')
   || (map[tab[0] + 1][tab[1]] != 'H'))
   {
     if ((map[tab[0] + 1][tab[1] - 1] == 'i')
          || (map[tab[0] + 2][tab[1]] == 'i')
          || (map[tab[0] + 2][tab[1] + 1] == 'i')
          || (map[tab[0] + 2][tab[1] - 1] == 'i'))
     {
        vu = 1;
     }
   }
   else if (map[tab[0] + 1][tab[1]] == 'H')
     {
      if ((map[tab[0] + 2][tab[1]] == 'i')
   	 || (map[tab[0] + 2][tab[1] + 1] == 'i')
   	 || (map[tab[0] + 2][tab[1] - 1] == 'i'))
   	 vu = 1;
     }
   return vu;
}
