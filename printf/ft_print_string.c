#include "ft_printf.h"

int ft_print_string(char *s)
{ 
    int i;

    i = 0;
    if (!s)
    return write(1, "(null)", 6);

    while (s[i])
    {
        write(1,&s[i],1);
        i++;
    }
    return (i);
}