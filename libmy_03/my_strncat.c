/*
** my_strncat.c for my_strncat in /home/ay/languageC/jour04/achat_y/my_strncat
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 14:00:57 2016 Achat Youmer
** Last update Thu Sep 29 14:16:51 2016 Achat Youmer
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  while (src[j] != '\0' && j < n)
    {
      dest[i + j] = src[j];
      j++;
    }
  dest[i + j] = '\0';
  return dest;
}
