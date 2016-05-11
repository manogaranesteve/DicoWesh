/*
** aff_dico_fr.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 15:24:52 2016 MANOGARANE Steve »
** Last update Fri Apr  8 17:54:05 2016 MANOGARANE Steve »
*/

#include "my_list.h"
#include "my_lib.h"
#include <stdlib.h>

void	aff_dico_fr(t_list *list)
{
  t_list	*list1;

  system("clear");
  list1 = NULL;
  list1 = list;
  if (list1 == NULL)
    my_putstr("\033[31mVotre dictionnaire est de-vi (vide en wesh)!\033[0m\n");
  else
    {
      my_putstr("\t\033[36m ====== Français : Weshwesh ====== \033[0m\n");
      sort_fr(list1);
      my_putstr("\t\t\033[36m#----------------#\033[0m\n");
      while (list1 != NULL)
	{
	  my_putstr("\t\t   ");
	  my_putstr(list1->mot_en_fr);
	  my_putstr(" : ");
	  my_putstr(list1->mot_en_wesh);
	  list1 = list1->next;
	  my_putstr("\n\t\t\033[36m  _____________\033[0m \n");
	}
      my_putstr("\t\t\033[36m#----------------#\033[0m");
    }
  my_putstr("\n\n");
}
