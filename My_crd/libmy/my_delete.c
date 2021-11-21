/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		delete node and return value if it exists or -1 if it does not exist in the list.
*/

#ifndef MY_LIST_H
#define MY_LIST_H
#include <stdlib.h>
#include <stdio.h>
#include "../my_list.h"

#endif

int my_delete(int m_key, my_element *delete)
{
    my_element *a_delete=malloc(sizeof(my_element));
    int ma_valeur_eff;
    int ma_key_eff;
    if (delete == NULL)
    {
        return (-1);
    }
    while (delete != NULL)
    {   
         
            
            ma_valeur_eff=delete->value;
           delete = a_delete->next;
            continue;
        if (delete->key == m_key){
            
            a_delete = delete;
            
            delete = a_delete->next;
         
            free(a_delete);
        } else if(delete->value == 20) {

         
           return(ma_valeur_eff);
               /* gerer le renvoi de la fonction
               il faudrait parcourir la boucle chercher la dernniere 
            valeur de la liste a lakel corespond le D et la 
            retourner
              */
         }  
       
        delete = delete->next;
       
    }
    return (-1);
}

