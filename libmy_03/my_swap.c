/*
** my_swaps.c for my_swap in /home/ay/languageC/jour03/achat_y/my_swap
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Wed Sep 28 12:39:06 2016 Achat Youmer
** Last update Wed Sep 28 17:24:20 2016 Achat Youmer
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
