/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		display char given as a parameter.
*/

#include <unistd.h>

void my_putchar(char c) 
{ 
  write(1, &c, 1);
}
