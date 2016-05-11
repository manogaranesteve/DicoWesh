/*
** add_mot.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 16:24:21 2016 MANOGARANE Steve »
** Last update Fri Apr  8 17:50:22 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include "my_list.h"

t_list	*add_mot(t_list *list, char *mot_en_wesh, char *mot_en_fr)
{
  t_list	*node;

  if ((node = malloc(sizeof(*node))) == NULL)
    return NULL;
  if (node == 0)
    return (0);
  node->mot_en_fr = mot_en_fr;
  node->mot_en_wesh = mot_en_wesh;
  node->next = list;
  return (node);
  free (node);
}
