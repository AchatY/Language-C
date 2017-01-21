/*
** my_strcat.c for my_strcat in /home/ay/languageC/jour04/achat_y/my_strcat
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:33:43 2016 Achat Youmer
** Last update Thu Sep 29 13:58:42 2016 Achat Youmer
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  while (src[j] != '\0')
    {
      dest[i + j] = src[j];
      j++;
    }
  dest[i + j] = '\0';
  return dest;
}
