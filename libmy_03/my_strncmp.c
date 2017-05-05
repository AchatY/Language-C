/*
** my_strncmp.c for my_strncmp in /home/ay/languageC/jour04/achat_y/my_strncmp
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:01:26 2016 Achat Youmer
** Last update Sat Oct  1 00:54:52 2016 Achat Youmer
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && i < n)
    {
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      else if (s1[i] < s2[i])
	{
	  return (-1);
	}
      i = i + 1;
    }
  return (0);
}
