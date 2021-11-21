
/*
** ETNA PROJECT, 2021
** my_crd
** File description:
** 		
**      
*/

#ifndef MY_LIST_H
#define MY_LIST_H
#endif

int getnbr(char *c);
int getnbr_tab(char *c);
void my_putstr(const char *str);
void my_putchar(char c);
void my_putnbr(int nbr);
char **my_str_to_word_array(const char *str);

typedef struct element_list_t {
    int key;
    int value;
    struct element_list_t *next;
} my_element;

void my_add(int my_key, int my_value, my_element **list);
int my_search(int m_key, my_element *search);
int my_delete( int my_key,my_element *delete);



