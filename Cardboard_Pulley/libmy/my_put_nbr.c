/*
** my_put_nbr.c for my_put_nbr in /home/ay/languageC/jour05/achat_y/my_put_nbr
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Fri Sep 30 14:48:46 2016 Achat Youmer
** Last update Fri Sep 30 22:23:06 2016 Achat Youmer
*/

void	my_putchar(char c);

int	my_nb_len(int n)
{
  int	dev;
  int	nb_len;

  nb_len = 1;
  dev = n;
  while (dev > 9 || dev < (-9))
    {
      nb_len = nb_len + 1;
      dev = dev / 10;
    }
  return (nb_len);
}

int	find_dev(int n)
{
  int	i;
  int	dev;

  dev = 1;
  i = 1;
  while (i < n)
    {
      dev = dev * 10;
      i = i + 1;
    }
  return (dev);
}

void	my_put_nbr(int n)
{
  int	i;
  int	rs;
  int	dev;
  int	nb;

  i = 0;
  if (n < 0)
    {
      my_putchar('-');
    }
  rs = n;
  dev = find_dev(my_nb_len(n));
  while (i < my_nb_len(n))
    {
      nb = rs / dev;
      if (nb < 0)
	nb = nb * (-1);    
      my_putchar(nb + 48);
      rs = rs % dev;
      dev = dev / 10;
      i = i + 1;
    }
}
