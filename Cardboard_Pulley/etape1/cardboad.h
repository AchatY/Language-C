#ifndef	_MY_STRUCT_H
#define	_MY_STRCUT_H

#include	<unistd.h>
#include	<stdlib.h>
#include	<string.h>

typedef struct	s_room
{
  char		**map;
  struct s_room	*next;
}		t_room;

typedef struct	s_flag
{
  char		*str;
  void		(*f)();
}		t_flag;

char	*readline();
int	    my_strcmp(char *c, char *b);
void	my_putstr(char *str);
void	my_put_nbr(int a);
void	my_putchar(char c);
int	    countlines(char *filename);
int	    *coordonnee(char **map);
char	**malloc_map(char *filename);
char	**init_map(char *filename);
void	print_map(char **map);
void	droite(char **map);
void	gauche(char **map);
void	bas(char **map);
void	haut(char **mapint);
void	prompt (char **map);
void	check_fun (char *tmp, char **map);
void	help(char **map);
char    *my_strlowcase(char str[]);
void	quit();
#endif
