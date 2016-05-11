/*
** aff_dico_wesh.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 15:26:28 2016 MANOGARANE Steve »
** Last update Fri Apr  8 17:54:30 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include "my_list.h"
#include "my_lib.h"

void	aff_dico_wesh(t_list *list)
{
  t_list	*list1;

  system("clear");
  list1 = NULL;
  list1 = list;
  if (list1 == NULL)
    my_putstr("\033[31mVotre dictionnaire est vide !\033[0m\n");
  else
    {
      sort_fr(list1);
      my_putstr("\t\033[36m ====== Weshwesh : Français ====== \033[0m\n");
      my_putstr("\t\t\033[36m#----------------#\033[0m\n");
      while (list1 != NULL)
	{
	  my_putstr("\t\t   ");
	  my_putstr(list1->mot_en_wesh);
	  my_putstr(" : ");
	  my_putstr(list1->mot_en_fr);
	  list1 = list1->next;
	  my_putstr("\n\t\t\033[36m   _____________ \033[0m\n");
	}
      my_putstr("\t\t\033[36m#----------------#\033[0m");
    }
  my_putstr("\n\n");
}
