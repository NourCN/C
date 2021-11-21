/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		search node and return value if it exists or if it does not exist in the list -1
*/

#ifndef MY_LIST_H
#define MY_LIST_H
#include <stdlib.h>
#include "../my_list.h"
#include <stdio.h>
#endif

int my_search(int m_key, my_element *search) 
{
    my_element *current = search;
    if (current == NULL)    return (-1);
    while (current->next != NULL) {
        if (current->key == m_key)  return (current->value);
        current = current->next;
    }
    return (-1);
}