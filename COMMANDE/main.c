/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		run all my function
*/

#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

int main(void) 
{
   char *line = NULL;
   size_t n = 0;
   my_element *my_liste = malloc(sizeof(my_element));
   int key_search;
   while (getline(&line, &n, stdin) != -1) {
      char **tab = my_str_to_word_array(line);
      if (tab[1] != NULL )
         my_add(getnbr(tab[0]), getnbr(tab[1]), (&my_liste));
      if (tab[1] == NULL) {
         key_search = getnbr(tab[0]);
         my_putnbr(my_search(key_search, my_liste));
      }
      else if (*tab[1] == 'D' ) {
         key_search = getnbr(tab[1]);  
         my_putnbr(my_delete(key_search, my_liste));
      }
      else {
         my_add(getnbr(tab[0]), getnbr(tab[1]), (&my_liste));
         my_putnbr(my_liste->key);
      }
      putchar('\n');
   }
   return 0;
}