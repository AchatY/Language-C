#include "cardboad.h"
 
void	enmy(char **map)
{
  int	count;
  int	find;
  int	*tab;
  int	*tab_tmp;
  int	i;

  count = nbr_enmy(map);
  find = 1;
  tab = malloc (sizeof(int) * count * 2);
  tab_tmp = malloc (sizeof(int) * 3);
  i = 0;
  while (find <= count + 1)
    {
      tab_tmp = coordenmy(map, find);
      tab[i] = tab_tmp[0];
      tab[i + 1] = tab_tmp[1];
      find = find + 1;
      i = i + 2;
    }
  i = 0;
  while (i < count * 2)
    {
      tab_tmp[0]=tab[i];
      tab_tmp[1]=tab[i + 1];
      act(tab_tmp, map);
      i = i + 2;
    }
  free(tab);
}

int	vision_enmy(char **map)
{
  int	count;
  int	find;
  int	*tab;
  int	*tab_tmp;
  int	i;
  int	vu;

  count = nbr_enmy(map);
  find = 1;
  tab = malloc (sizeof(int) * count * 2);
  tab_tmp = malloc (sizeof(int) * 3);
  i = 0;
  while (find <= count + 1)
    {
      tab_tmp = coordenmy(map, find);
      tab[i] = tab_tmp[0];
      tab[i + 1] = tab_tmp[1];
      find = find + 1;
      i = i + 2;
    }
  i = 0;
  while (i < count * 2)
    {
      tab_tmp[0]=tab[i];
      tab_tmp[1]=tab[i + 1];
      vu = vision(map, tab_tmp);
      if (vu)
      {
	    return vu;
	  }
      i = i + 2;
    }
  return vu;
}

int	nbr_enmy(char **map)
{
  int	j;
  int	i;
  int	count;

  i = 0;
  j = 0;
  count = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  if ((map[j][i] == '<') || (map[j][i] == '>')
	  || (map[j][i] == '^') || (map[j][i] == 'v'))
	    {
            count = count + 1;
	    }
	  i++;
	}
      j++;
    }
  return count;
}

int	*coordenmy(char **map, int find)
{
  int 	j;
  int 	i;
  int 	*tab;
  int 	l;

  tab = malloc (sizeof(int) * 3);
  l = 0;
  i = 0;
  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  if ((map[j][i] == '<') || (map[j][i] == '>')
	  || (map[j][i] == '^') || (map[j][i] == 'v'))
	    {
	      l = l + 1;
	      if ( l == find)
	        {
	          tab[0] = j;
	          tab[1] = i;
	        }
	    }
	  i++;
	}
      j++;
    }
  return tab;
}
