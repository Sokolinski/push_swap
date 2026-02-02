#include "ft_printf.h"

static int ft_print_lower(unsigned long long int n)
{
    char *base = "0123456789abcdef";
    unsigned long long int i = 0;

    if (n >= 16)
        i += ft_print_lower(n / 16);
    i += ft_print_char(base[n % 16]);
    return (i);
}

int ft_print_ptr(void *p)
{
    unsigned long long value;
    int i;

    if (!p)
        return (write(1, "(nil)", 5));
    value = (unsigned long long int)p;
    i = 2;
    write(1, "0x", 2);
    i += ft_print_lower(value);
    return (i);
}