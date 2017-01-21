#ifndef _MY_STRUCT_H
#define _MY_STRUCT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>


typedef struct    s_room
{
  char            **map;
  int		level;
  struct s_room   *next;
}                 t_room;

typedef struct s_angle
{
  char str;
  int (*f)();
}               t_angle;

typedef struct s_flag
{
  char *str;
  int (*f)();
}               t_flag;

typedef struct s_flag_y
{
  char *str;
  char **(*f)();
}       t_flag_y;

typedef struct s_enmy
{
  int act;
  void (*f)();
}               t_enmy;

char    *readline();
int     my_strcmp(char *c, char *b);
void    my_putstr(char *str);
void	my_put_nbr(int a);
void	my_putchar(char c);
int     countlines(char *filename);
int     *coordonnee(char **map);
int     *coordonnee_yellow(char **map);
char    **malloc_map(char *filename);
char    **init_map(char *filename);
void    print_map(char **map);
int    droite(t_room piece);
int    gauche(t_room piece);
int    bas(t_room piece);
int    haut(t_room piece);
char    **droite_y(t_room piece);
char    **gauche_y(t_room piece);
char    **bas_y(t_room piece);
char   **haut_y(t_room piece);
int    accroupi(t_room piece);
void    prompt (t_room piece);
void    check_fun (char *tmp, t_room piece);
int    key_find(t_room piece);
int    open_door(t_room piece);
void    enmy(char **map);
int     nbr_enmy(char **map);
int     *coordenmy(char **map, int find);
void    act(int *tab, char **map);
void    front(char **map, int *tab);
void    turn(char **map, int *tab);
char    **check_y(t_room piece, int a);
int     vision_enmy(char **map);
int     vision(char **map, int *tab);
int     vision_droite(char **map, int *tab);
int     vision_gauche(char **map, int *tab);
int     vision_haut(char **map, int *tab);
int     vision_bas(char **map, int *tab);
t_room  init_room(char **map_actuelle, t_room *room_suiv, int level);
int	    help(t_room piece);
char	*my_strlowcase(char str[]);
int    quit();

#endif
