#include "cardboad.h"

int	main(int argc, char **argv)
{
  char	**map;
  int	j;

  j = 0;
  if (argc > 1)
    my_putstr("USAGE : ./not_mg \n");      
  else if (my_strcmp(argv[0],"./not_mg") == 0)
    {
      map = init_map("cargo_dock.map");
      prompt(map);
      while (map[j])
	{
	  free(map[j]);
	  j++;
	}
      free(map);
    }
  return 0;
}
