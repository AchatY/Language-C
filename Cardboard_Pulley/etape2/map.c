#include "cardboad.h"
#include <stdlib.h>
#include <stdio.h>

int	countlines(char *filename)
{
  FILE	*fp;
  int	ch=0;
  int	lines=0;

  fp = fopen(filename,"r");
  if (fp != NULL)
    {
      lines++;
      while ((ch = fgetc(fp)) != EOF)
	{
	  if (ch == '\n')
	    lines++;
	}
    }
  fclose(fp);
  return lines;
}

void    help(t_room piece)
{
  my_putstr("\n*************************************************************************************\n"\
	    );
  my_putstr("*                                                                                   *\n");
  my_putstr("*    'X' correspond a un mur ne fonçez pas dedans                                   *\n");
  my_putstr("*    'H' est un ostacle accroupissez vous avec 'c'                                  *\n");
  my_putstr("*    'K' correspond a une clé pour la recuper cliquer sur espace                    *\n");
  my_putstr("*    'x' est une porte fermée pour l'ouvir faut avoir la clé et cliquer sur 'e'     *\n");
  my_putstr("*    'a'->gauche 'w'->haut 'd'->droite 's'->bas'                                    *\n");
  my_putstr("*                                                                                   *\n");
  my_putstr("*************************************************************************************\n\n"\
	    );
  prompt (piece);
}

char	**malloc_map(char *filename)
{
  FILE*	fichier;
  char	caractereActuel;
  int	i;
  int	j;
  int	lines;
  char	**map;

  fichier = NULL;
  j = 0;
  lines = countlines(filename);
  fichier = fopen(filename, "r+");
  map = malloc(sizeof (*map) * (lines + 1));
  fichier = fopen(filename, "r+");
  j = 0;
  i = 0;

  if (fichier != NULL)
    {
      while ((caractereActuel = fgetc(fichier)) != EOF)
	{
	  if (caractereActuel == '\n')
	    {
	      map[j] = malloc(sizeof (**map) * (i));
	      j++;
	      i = 0;
	    }
	  i++;
	}
    }
  fclose(fichier);
  return map;
}
char	**init_map(char *filename)
{
  FILE 	*fp;
  int 	i;
  int 	j;
  char 	caractereActuel1;
  char 	**map;

  fp = NULL;
  i = 0;
  j = 0;
  fp = fopen(filename, "r+");
  map = malloc_map(filename);
  if (fp != NULL)
    {
      while ((caractereActuel1 = fgetc(fp)) != EOF)
	{
	  if (caractereActuel1 != '\0' )
	    {
	      map[j][i] = caractereActuel1;
	      i++;
	    }
	  if (caractereActuel1 == '\n')
	    {
	      j++;
	      i = 0;
	    }
	}
    }
  fclose(fp);
  return map;
}

void	print_map(char **map)
{
  int	j;
  int	i;

  i = 0;
  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i + 1] != '\0')
	{
	  my_putchar(map[j][i]);
	  i++;
	}
      my_putchar('\n');
      j++;
    }
}
