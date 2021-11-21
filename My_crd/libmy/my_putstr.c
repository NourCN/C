/*
** ETNA PROJECT, 2021
** my_crd
** File description:
** 		Function that displays, one-by-one, the characters of a string.
**      The address will be found in the pointer passed as a parameter to the function.
*/

void my_putchar(char c);

void my_putstr(const char *str) 
{
    int i = 0;
    while (*(str+i) != '\0'){
        my_putchar((char)(*(str+i)));
        ++i;
    }
}
