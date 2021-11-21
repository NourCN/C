/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		add node and upload value if it exists else add if it does not exist in the list and return key.
*/

#ifndef MY_LIST_H
#define MY_LIST_H
#include <stdlib.h>
#include "../my_list.h"
#endif

void my_add(int my_key, int my_value, my_element **list) 
{
    my_element *new_node = malloc(sizeof(my_element));
    new_node->key = my_key;
    //if(my_value!= 68 ){
      new_node->value = my_value;  
    //}
    new_node->next = *list;
    (*list) = new_node;
}
