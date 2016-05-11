/*
** my_lib.h for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 8:43:09 2016 MANOGARANE Steve »
** Last update Fri Apr  8 15:46:51 2016 MANOGARANE Steve »
*/

#ifndef MY_LIB_H
#define MY_LIB_H

#include "my_list.h"

void	sort_fr(t_list *list);
void	sort_wesh(t_list *list);
void	my_swap(char **str1, char **str2);
void	wrongchoice(char *choix);
t_list	*pseudo_main(t_list *list,char *choix, char *choix2);
int	my_getnbr(char *str);
void	my_putstr(char *str);
int	my_strcmp(char *str1, char *str2);
char	*my_strcpy(char *dest, char *src);
char	*readLine();
int	my_put_nbr(int i);
t_list	*add_mot(t_list *list, char *str1, char *str2);
void	aff_dico_fr(t_list *list);
void	aff_dico_wesh(t_list *list);
void	afficheMenu();
t_list	*ajout_def(t_list *list, char *mot_en_wesh, char *mot_en_fr);
void	fr_to_wesh(t_list *list, char *mot_en_fr);
void	wesh_to_fr(t_list *list, char *mot_en_fr);
char	*menu();

#endif
