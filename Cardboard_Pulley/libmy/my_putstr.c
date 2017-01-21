/*
** my_putstr.c for my_putstr in /home/ay/languageC/jour03/achat_y/my_putstr
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:15:38 2016 Achat Youmer
** Last update Wed Sep 28 10:36:54 2016 Achat Youmer
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
