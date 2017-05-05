/*
** my_strcpy.c for my_strcpy in /home/ay/languageC/jour04/achat_y/my_strcpy
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 09:56:38 2016 Achat Youmer
** Last update Fri Sep 30 22:53:35 2016 Achat Youmer
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
