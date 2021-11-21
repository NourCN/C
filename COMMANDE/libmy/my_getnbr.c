/*
** ETNA PROJECT, $2021
** my_crd
** File description:
** 		parsing char to int given as a parameter.
*/

int getnbr(char *c) 
{
    int n = 0;
    int i = 0;
    while (c[i] && c[i] != '\n') {
        n = n * 10;
        n = n + (c[i] - 48);
        i++;
    }
    return (n);
}
