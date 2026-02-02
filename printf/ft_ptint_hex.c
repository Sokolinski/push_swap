#include "ft_printf.h"

static int ft_print_lower_hex(unsigned int n)
{
    char *base = "0123456789abcdef";
    int i = 0;

    if (n >= 16)
        i += ft_print_lower_hex(n / 16);
    i += ft_print_char(base[n % 16]);
    return (i);
}

static int ft_print_upper_hex(unsigned int n)
{
    char *base = "0123456789ABCDEF";
    int i = 0;

    if (n >= 16)
        i += ft_print_upper_hex(n / 16);
    i += ft_print_char(base[n % 16]);
    return (i);
}

int ft_print_hex(unsigned int n, bool uppercase)
{
    if (!uppercase)
        return ft_print_lower_hex(n);
    return ft_print_upper_hex(n);
}
