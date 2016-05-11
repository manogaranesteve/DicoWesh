/*
** sort_fr.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:54:05 2016 MANOGARANE Steve »
** Last update Fri Apr  8 16:52:54 2016 MANOGARANE Steve »
*/

#include "my_lib.h"
#include <stdlib.h>

void	sort_fr(t_list *list)
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
	  if (my_strcmp(tmp->mot_en_fr, tmp1->mot_en_fr) > 0)
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
