/*
** wesh_to_fr.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:55:45 2016 MANOGARANE Steve »
** Last update Fri Apr  8 16:53:25 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include "my_list.h"
#include "my_lib.h"

void	wesh_to_fr(t_list *list, char *mot_en_wesh)
{
  t_list	*list1;

  system("clear");
  list1 = NULL;
  list1 = list;
  while (list1 != NULL)
    {
      if (my_strcmp(list1->mot_en_wesh, mot_en_wesh) == 0)
	{
	  my_putstr("\n\t  ---------------------");
	  my_putstr("\n\t    ");
	  my_putstr(list1->mot_en_wesh);
	  my_putstr(" : ");
	  my_putstr(list1->mot_en_fr);
	  my_putstr("\n\t  ---------------------");
	  my_putstr("\n\n");
	  return;
	}
      list1 = list1->next;
    }
  my_putstr("\033[31m**!! Le mot n'éxiste pas dans\033[0m ");
  my_putstr("\033[31mvotre dictionnaire !!**\033[0m\n");
}
