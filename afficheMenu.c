/*
** afficheMenu.c for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:28:21 2016 MANOGARANE Steve »
** Last update Fri Apr  8 15:26:26 2016 MANOGARANE Steve »
*/

#include "my_lib.h"

void	afficheMenu()
{
  my_putstr("\033[32m*----------------------------*\033[0m\n");
  my_putstr("\033[32m| Bienvenue sur le DicoWesh !|\033[0m\n");
  my_putstr("\033[32m*----------------------------*\033[0m\n");
  my_putstr("\033[33m*----------------------\033[0m");
  my_putstr("\033[33m---------------------------*\033[0m\n");
  my_putstr("a : afficher le dictionnaire sous la forme wesh : fr\n");
  my_putstr("*-------------------------------------------------*\n");
  my_putstr("b : afficher le dictionnaire sous la forme fr : wesh\n");
  my_putstr("*-------------------------------------------------*\n");
  my_putstr("1 : ajouter une définition\n");
  my_putstr("*-------------------------------------------------*\n");
  my_putstr("2 : traduire du wesh au francais\n");
  my_putstr("*-------------------------------------------------*\n");
  my_putstr("3 : traduire du francais au wesh\n");
  my_putstr("*-------------------------------------------------*\n");
  my_putstr("\033[32mq : quitter la parti \033[0m\n");
  my_putstr("\033[33m*---------------------\033[0m\n");
  my_putstr("\033[33m----------------------------*\033[0m\n");
}
