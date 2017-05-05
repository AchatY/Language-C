/*
** my_strlen.c for my_strlen in /home/ay/languageC/jour03/achat_y/my_strlen
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:47:04 2016 Achat Youmer
** Last update Wed Sep 28 11:11:12 2016 Achat Youmer
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      i = i + 1;
      str = str + 1;
    }
  return (i);
}
