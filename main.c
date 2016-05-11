/*
** main.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 11:32:51 2016 MANOGARANE Steve »
** Last update Fri Apr  8 18:07:51 2016 MANOGARANE Steve »
*/

#include "my_lib.h"
#include <stdlib.h>
#include "my_list.h"

int	main()
{
  char	*choix;
  char	*choix2;
  t_list	*list;

  system("clear");
  list = NULL;
  do
    {
      choix = malloc(sizeof(char *) * sizeof(*choix));
	if (choix == 0)
	  return (0);
	choix2 = malloc(sizeof(char *) * sizeof(*choix));
	if (choix2 == 0)
	  return (0);
      choix = menu();
      list = pseudo_main(list, choix, choix2);
      wrongchoice(choix);
      free(choix);
      free(choix2);
    }
  while (my_strcmp(choix, "q") != 0);
  system("clear");
  return (0);
}
