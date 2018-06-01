#include "sapin.h"

int      main(int argc, char *argv[])
{

  if (argc == 1)
  {
    my_putstr("Donnes une taille au sapin !");
  }

  if (my_getnbr(argv[1]) < 0)
  {
    return(0);
  }
  else
  {
    print_sapin(my_getnbr(argv[1]));
  }
  return(0);
}
