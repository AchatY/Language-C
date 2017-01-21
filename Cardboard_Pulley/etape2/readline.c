#include"cardboad.h"

char		*readline()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

char    *my_strlowcase(char str[])
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (65 <= str[i] && str[i] <= 90)
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}

void quit()
{
  return ;
}