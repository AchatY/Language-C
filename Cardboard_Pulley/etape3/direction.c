#include "cardboad.h"
int 	POS = 0;
int 	KEY_EXIST = 0;

int	droite(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);
  if (piece.map[tab[0]][tab[1] + 1] == ' ')
    {
      if (piece.map[tab[0]][tab[1]] == 'i' || piece.map[tab[0]][tab[1]] == 'O' || POS == 0)
	piece.map[tab[0]][tab[1] + 1] = 'i';
      else if (piece.map[tab[0]][tab[1]] == '_' || POS == 1)
	piece.map[tab[0]][tab[1] + 1] = '_';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
  else if ((piece.map[tab[0]][tab[1] + 1] == 'H') && (piece.map[tab[0]][tab[1]] == '_'))
    {
      piece.map[tab[0]][tab[1] + 2] = '_';
      piece.map[tab[0]][tab[1]] = ' ';
    }
  else if (piece.map[tab[0]][tab[1] + 1] == 'K')
    piece.map[tab[0]][tab[1]] = ' ';
  else
    {
      my_putstr("Erreur : Taper 'h' pour plus d'information \n");
      free(tab);
      return 0;
    }
  free(tab);
  prompt (piece);
  return 1;
}

int	gauche(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);

  if (piece.map[tab[0]][tab[1] - 1] == ' ')
    {
      if (piece.map[tab[0]][tab[1]] == 'i' || piece.map[tab[0]][tab[1]] == 'O' || POS == 0 )
	piece.map[tab[0]][tab[1] - 1] = 'i';
      else if (piece.map[tab[0]][tab[1]] == '_' || POS == 1)
	piece.map[tab[0]][tab[1] - 1] = '_';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
   else if ((piece.map[tab[0]][tab[1] - 1] == 'H') && (piece.map[tab[0]][tab[1]] == '_'))
       {
         piece.map[tab[0]][tab[1] - 2] = '_';
         piece.map[tab[0]][tab[1]] = ' ';
       }
   else if (piece.map[tab[0]][tab[1] - 1] == 'K')
     piece.map[tab[0]][tab[1]] = ' ';
   else
     {
       my_putstr("Erreur : Taper 'h' pour plus d'information \n");
       free(tab);
       return 0;
     }
  free(tab);
  prompt (piece);
  return 1;
}

int	bas(t_room piece)
{
  int	*tab;
  
  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);
  
  if (piece.map[tab[0] + 1][tab[1]] == ' ')
    {
      if (piece.map[tab[0]][tab[1]] == 'i' || piece.map[tab[0]][tab[1]] == 'O'|| POS == 0)
	piece.map[tab[0] + 1][tab[1]] = 'i';
      else if (piece.map[tab[0]][tab[1]] == '_' || POS == 1)
	piece.map[tab[0] + 1][tab[1]] = '_';
      if (piece.map[tab[0]][tab[1]] != 'K')
	piece.map[tab[0]][tab[1]] = ' ';
    }
    else if ((piece.map[tab[0] + 1][tab[1]] == 'H') && (piece.map[tab[0]][tab[1]] == '_'))
        {
          piece.map[tab[0] + 2][tab[1]] = '_';
          piece.map[tab[0]][tab[1]] = ' ';
        }
    else if (piece.map[tab[0] + 1][tab[1]] == 'K')
      piece.map[tab[0]][tab[1]] = ' ';
    else
      {
	my_putstr("Erreur : Taper 'h' pour plus d'information \n");
	free(tab);
	return 0;
      }
  free(tab);
  prompt (piece);
  return 1;
}

int	haut(t_room piece)
{
  int	*tab;
  
  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);

  if ((tab[0] - 1) >= 0)
    {
      if (piece.map[tab[0] - 1][tab[1]] == ' ')
	{
	  if ((piece.map[tab[0]][tab[1]] == 'i') || piece.map[tab[0]][tab[1]] == 'O' || POS == 0)
	    piece.map[tab[0] - 1][tab[1]] = 'i';
	  else if (piece.map[tab[0]][tab[1]] == '_' || POS == 1)
	    piece.map[tab[0] - 1][tab[1]] = '_';
	  if (piece.map[tab[0]][tab[1]] != 'K')
	    piece.map[tab[0]][tab[1]] = ' ';
	}
      else if ((piece.map[tab[0] - 1][tab[1]] == 'H') && (piece.map[tab[0]][tab[1]] == '_'))
	{
	  piece.map[tab[0] - 2][tab[1]] = '_';
	  piece.map[tab[0]][tab[1]] = ' ';
	}
      else if (piece.map[tab[0] - 1][tab[1]] == 'K')
	piece.map[tab[0]][tab[1]] = ' ';
      else
	{
	  my_putstr("Erreur : Taper 'h' pour plus d'information \n");
	  free(tab);
	  return 0;
	}
      
      prompt (piece);
    }
  else
    {
      my_putstr("To be continued \n");
      sleep(1);
      if (piece.next != NULL)
	{
	  piece.map = piece.next->map;
	  piece.level = piece.next->level;
	  piece.next = piece.next->next;
	  prompt(piece);
	}
    }
  free(tab);
  return 1;
}

int	accroupi(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);

  if (piece.map[tab[0]][tab[1]] == 'i' || piece.map[tab[0]][tab[1]] == 'O' )
    {
      piece.map[tab[0]][tab[1]] = '_';
      POS = 1;
    }
  else if (piece.map[tab[0]][tab[1]] == '_')
    {
      piece.map[tab[0]][tab[1]] = 'i';
      POS = 0;
    }
  free(tab);
  prompt(piece);
  return 1;
}

int	key_find(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);

  if (piece.map[tab[0]][tab[1]] == 'K')
    {
      if (POS == 0)
	piece.map[tab[0]][tab[1]] = 'i';
      else
	piece.map[tab[0]][tab[1]] = '_';
      KEY_EXIST = 1;
    }
  free(tab);
  prompt(piece);
  return 1;
}

int	open_door(t_room piece)
{
  int	*tab;

  tab = malloc (sizeof(int) * 3);
  tab = coordonnee(piece.map);

  if (KEY_EXIST == 1)
    {
      if (piece.map[tab[0] + 1][tab[1]] == 'x')
	piece.map[tab[0] + 1][tab[1]] = ' ';
      else if (piece.map[tab[0] - 1][tab[1]] == 'x')
	piece.map[tab[0] - 1][tab[1]] = ' ';
      else if (piece.map[tab[0]][tab[1] + 1] == 'x')
	piece.map[tab[0]][tab[1] + 1] = ' ';
      else if (piece.map[tab[0]][tab[1] - 1] =='x')
	piece.map[tab[0]][tab[1] - 1] = ' ';
    }
  free(tab);
  prompt(piece);
  return 1;
}
