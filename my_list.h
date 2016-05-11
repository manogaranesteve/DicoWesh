/*
** my_list.h for  in /Users/stevemanogarane/Desktop/dicowesh
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Apr  7 14:44:31 2016 MANOGARANE Steve »
** Last update Fri Apr  8 15:47:13 2016 MANOGARANE Steve »
*/

#ifndef __MY_LIB_H__
#define __MY_LIB_H__

typedef struct		s_list
{
  char			*mot_en_fr;
  char			*mot_en_wesh;
  struct s_list		*next;
}			t_list;
#endif
