#include "ft_printf.h"

int ft_print_char(int c)
{
    char ch = (char)c;
    return (write(1, &ch, 1));
}
