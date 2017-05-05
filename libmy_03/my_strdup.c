/*
** my_strdup.c for my_strdup in /home/ay/languageC/jour07/achat_y/my_strdup
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Mon Oct  3 11:18:31 2016 Achat Youmer
** Last update Mon Oct  3 22:25:20 2016 Achat Youmer
*/

#include	<stdlib.h>

int		my_strlen(char *str);

char		*my_strcpy(char *str, char *strcp);

char		*my_strdup(char *str)
{
  int		nb;
  char		*strcp;

  nb = my_strlen(str);
  strcp = malloc((nb) * sizeof(char));
  if (strcp != 0)
    {
      my_strcpy(strcp, str);
    }
  return (strcp);
}
