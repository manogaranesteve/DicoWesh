/*
** pseudo_main.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:52:41 2016 MANOGARANE Steve »
** Last update Fri Apr  8 16:51:02 2016 MANOGARANE Steve »
*/

#include "my_list.h"
#include "my_lib.h"

t_list	*pseudo_main(t_list *list, char *choix, char *choix2)
{
  if (my_strcmp(choix, "a") == 0)
    aff_dico_wesh(list);
  else if (my_strcmp(choix, "b") == 0)
    aff_dico_fr(list);
  else if (my_strcmp(choix, "1") == 0)
    {
      my_putstr("Entrez le mot en wesh souhaité --> \n");
      choix = readLine();
      my_putstr("Entrez sa définition en francais --> \n");
      choix2 = readLine();
      list = ajout_def(list, choix, choix2);
    }
  else if (my_strcmp(choix, "2") == 0)
    {
      my_putstr("Entrez le mot en wesh à traduire -->");
      choix2 = readLine();
      wesh_to_fr(list, choix2);
    }
  else if (my_strcmp(choix, "3") == 0)
    {
      my_putstr("Entrez le mot en français à traduire -->");
      choix2 = readLine();
      fr_to_wesh(list, choix2);
    }
  return (list);
}
