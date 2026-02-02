#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
    int i = 0;

    if (n / 10 != 0)
        i += ft_print_unsigned(n / 10);
    i += ft_print_char((n % 10) + '0');
    return (i);
}