/*
** my_strcmp.c for my_strcmp in /home/ay/languageC/jour04/achat_y/my_strcmp
** 
** Made by Achat Youmer
** Login   <achat_y@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:47:35 2016 Achat Youmer
** Last update Fri Sep 30 13:21:50 2016 Achat Youmer
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
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
  if (s2[i] == '\0')
    {
      return (0);
    }
  return (-1);
}
