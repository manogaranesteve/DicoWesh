/*
** sort_wesh.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  8 14:55:07 2016 MANOGARANE Steve »
** Last update Fri Apr  8 14:55:15 2016 MANOGARANE Steve »
*/

#include "my_lib.h"
#include <stdlib.h>

void	sort_wesh(t_list *list)
{
  t_list	*tmp;
  t_list	*tmp1;
  t_list	*tmp2;

  tmp = list;
  while (tmp != NULL)
    {
      tmp1 = tmp->next;
      while (tmp1 != NULL)
	{
	  if (my_strcmp(tmp->mot_en_wesh, tmp1->mot_en_wesh) > 0)
	    {
	      tmp2 = tmp1;
	      my_swap(&tmp->mot_en_wesh, &tmp2->mot_en_wesh);
	      my_swap(&tmp->mot_en_fr, &tmp2->mot_en_fr);
	    }
	  tmp1 = tmp1->next;
	}
      tmp = tmp->next;
    }
}
