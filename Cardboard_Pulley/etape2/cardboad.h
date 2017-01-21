#ifndef _MY_STRUCT_H
#define _MY_STRCUT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_key
{
  int KEY_IND;
  int KEY_EXIST;
}		t_key;

typedef struct s_enmy
{
  int act;
  void (*f)();
}               t_enmy;

typedef struct    s_room
{
  char            **map;
  struct s_room   *next;
}                 t_room;

typedef struct s_flag
{
  char *str;
  void (*f)();
}               t_flag;

char    *readline();
int     my_strcmp(char *c, char *b);
void    my_putstr(char *str);
void	my_put_nbr(int a);
void	my_putchar(char c);
int     countlines(char *filename);
int     *coordonnee(char **map);
char    **malloc_map(char *filename);
char    **init_map(char *filename);
void    print_map(char **map);
void    droite(t_room piece);
void    gauche(t_room piece);
void    bas(t_room piece);
void    haut(t_room piece);
void    accroupi(t_room piece);
void    prompt (t_room piece);
void    check_fun (char *tmp, t_room piece);
void    key_find(t_room piece);
void    open_door(t_room piece);
void    enmy(char **map);
int     nbr_enmy(char **map);
int     *coordenmy(char **map, int find);
void    act(int *tab, char **map);
void    front(char **map, int *tab);
void    turn(char **map, int *tab);
t_room	init_room(char **map_actuelle, t_room *room_suiv);
void    help(t_room piece);
char    *my_strlowcase(char str[]);
void quit();

#endif
