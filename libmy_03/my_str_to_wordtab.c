/*
** my_str_to_wordtab.c for my_str_to_wordpad in /home/ay/languageC/jour07/achat_y/my_str_to_wordtab
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Mon Oct  3 12:33:26 2016 Achat Youmer
** Last update Mon Oct  3 22:16:40 2016 Achat Youmer
*/

#include	<stdlib.h>

char		*my_strncat(char *dest, char *src, int n);

int		my_alphanum(char c)
{
  if ((c <= 57 && c >= 48) || (c <= 90 && c >= 65) || (c <= 122 && c >= 97))
    return (0);
  return (1);
}

int		my_tablen(char *str)
{
  int		a;
  int		i;

  i = 0;
  a = 0;
  while (str[i] != '\0')
    {
      if (my_alphanum(str[i]) == 0 && my_alphanum(str[i + 1]) == 1)
	{
	  a = a + 1;
	}
      i = i + 1;
    }
  return (a);
}

char		**my_tab(char *str, char **tab)
{
  int		i;
  int		j;
  int		a;

  j = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (my_alphanum(str[i]) == 0)
	{
	  a = 0;
	  while (my_alphanum(str[i]) == 0)
	    {
	      a = a + 1;
	      i = i + 1;
	    }
	  tab[j] = malloc((a + 1) * sizeof(**tab));
	  tab[j][0] = '\0';
	  tab[j] = my_strncat(tab[j], &str[i - a], a);
	  j = j + 1;
	}
      else
        i = i + 1;
    }
  tab[j] = '\0';
  return (tab);
}

char		**my_str_to_wordtab(char *str)
{
  char		**tab;
  int		nb1;

  nb1 = my_tablen(str);
  tab = malloc((nb1 + 1) * sizeof(*tab));
  return (my_tab(str, tab));
}
