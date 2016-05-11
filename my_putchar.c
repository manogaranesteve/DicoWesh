/*
** my_putchar.c for  in /home/manogarane/Jour01/manoga_s
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Mon Oct 19 12:05:10 2015 MANOGARANE Steve »
** Last update Fri Apr  8 14:49:07 2016 MANOGARANE Steve »
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
