/*
** ETNA PROJECT, 2021
** my_crd
** File description:
** 		displays the number given as a parameter.
*/

void my_putchar(char c);

void my_putnbr(int nbr) 
{
    if(nbr<0) {
        nbr=nbr*(-1);
        my_putchar('-');
        my_putnbr(nbr);    
    } 
    else {
        char character = (char)((nbr % 10) + 48);
        if (nbr>10) my_putnbr(nbr/10);
        my_putchar(character);
    }
}
