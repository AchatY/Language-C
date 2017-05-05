/*
** my_strncpy.c for my_strncpy in /home/ay/languageC/jour04/achat_y/my_strncpy.c
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:11:05 2016 Achat Youmer
** Last update Thu Sep 29 10:21:37 2016 Achat Youmer
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
