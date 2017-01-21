#include "cardboad.h"

int	main(int argc, char **argv)
{
  char		**map;
  char		**map1;
  t_room	piece;
  t_room	piece1;
  int		j;

  j = 0;
  if (argc > 1)
    my_putstr("USAGE : ./not_mg \n");
  else if (my_strcmp(argv[0],"./not_mg") == 0)
    {
      map = init_map("cargo_dock.map");
      map1 = init_map("holding_cells.map");
      piece1 = init_room(map1, NULL);
      piece = init_room (map, &piece1);
      prompt(piece);
      while (map[j])
	{
	  free(map[j]);
	  j++;
	}
      free(map);
    }
  return 0;
}
