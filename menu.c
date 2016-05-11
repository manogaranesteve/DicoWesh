/*
** menu.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  8 10:34:25 2016 MANOGARANE Steve »
** Last update Fri Apr  8 15:45:41 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include "my_lib.h"

char	*menu()
{
  char	*str;

  str = malloc(sizeof(char *) * 10);
  afficheMenu();
  if (str == 0)
    return (0);
  my_putstr("\033[36m**************************************\n \033[0m");
  my_putstr("\033[36m*** A vous de choisir *** -->\033[0m ");
  str = readLine();
  my_putstr("\n\n");
  return (str);
  free(str);
}
