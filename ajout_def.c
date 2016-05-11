/*
** ajout_def.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 16:30:48 2016 MANOGARANE Steve »
** Last update Fri Apr  8 15:29:23 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include "my_list.h"
#include "my_lib.h"

t_list	*ajout_def(t_list *list, char *mot_en_wesh, char *mot_en_fr)
{
  t_list	*list1;

  system("clear");
  list1 = NULL;
  list1 = list;
  while (list1 != NULL)
    {
      if (my_strcmp(list1->mot_en_wesh, mot_en_wesh) == 0)
	{
	  list1->mot_en_fr = mot_en_fr;
	  return (list);
	}
      list1 = list1->next;
    }
  my_putstr("\n\n");
  list = add_mot(list, mot_en_wesh, mot_en_fr);
  my_putstr("\033[34m------___ le mot a été bien\033[0m");
  my_putstr("\033[34mn ajouté ___------ \033[0m\n\n");
  return (list);
}
