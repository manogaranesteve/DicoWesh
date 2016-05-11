/*
** wrongchoice.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:56:31 2016 MANOGARANE Steve »
** Last update Fri Apr  8 16:55:06 2016 MANOGARANE Steve »
*/

#include "my_lib.h"
#include <stdlib.h>

void	wrongchoice(char *choix)
{
  if ((my_strcmp(choix, "q") != 0) && (my_strcmp(choix, "1") != 0)
      && (my_strcmp(choix, "2") != 0) && (my_strcmp(choix, "3") != 0)
      && (my_strcmp(choix, "a") != 0) && (my_strcmp(choix, "b") != 0))
    {
      system("clear");
      my_putstr(" \033[31m!!! Choisi correctement !!!\033[0m \n");
    }
}
