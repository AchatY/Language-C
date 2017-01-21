/*
** my_strstr.c for my_strstr in /home/ay/languageC/jour04/achat_y/my_strstr
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 16:50:15 2016 Achat Youmer
** Last update Sat Oct  1 05:27:51 2016 Achat Youmer
*/

int	my_strlen(char *str);

int	my_strncmp(char *s1, char *s2, int n);

char	*my_strstr(char *str, char *to_find)
{
  int	nbfind;
  int	nbstr;

  nbfind = my_strlen(to_find);
  nbstr = my_strlen(str);
  if ((nbfind > nbstr) || nbfind == 0)
    return (0);
  while (my_strncmp(str, to_find, nbfind) != 0 && str[0] != '\0')
    str = str + 1;
  if (str[0] == '\0')
    return (0);
  return (str);
}
