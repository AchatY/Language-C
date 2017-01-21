#include "cardboad.h"

int	main(int argc, char **argv)
{
  char		**map;
  char		**map1;
  char		**map2;
  t_room	piece;
  t_room 	piece1;
  t_room 	piece2;
  
  if (argc > 1)
    my_putstr("USAGE : ./not_mg \n");
  else if (my_strcmp(argv[0],"./not_mg") == 0)
    {
      map  = init_map("cargo_dock.map");
      map1 = init_map("holding_cells.map");
      map2 = init_map("warehouse.map");
      piece2 = init_room (map2, NULL, 3);
      piece1 = init_room (map1, &piece2, 2);
      piece  = init_room (map, &piece1, 1);
      prompt(piece);
    }
  return 0;
}
