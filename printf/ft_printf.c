#include "ft_printf.h"

static int handle_specifier(char spec, va_list *args)
{
    if (spec == 'c')
        return ft_print_char(va_arg(*args, int));
    else if (spec == 's')
        return ft_print_string(va_arg(*args, char *));
    else if (spec == 'p')
        return ft_print_ptr(va_arg(*args, void *));
    else if (spec == 'd' || spec == 'i')
        return ft_print_number(va_arg(*args, int));
    else if (spec == 'u')
        return ft_print_unsigned(va_arg(*args, unsigned int));
    else if (spec == 'x')
        return ft_print_hex(va_arg(*args, unsigned int), false);
    else if (spec == 'X')
        return ft_print_hex(va_arg(*args, unsigned int), true);
    else if (spec == '%')
        return ft_print_percent();
    return 0;
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int count = 0;

    va_start(args, str);
    while (str && *str)
    {
        if (*str == '%')
        {
            str++;
            if (!*str)
                break;
            count += handle_specifier(*str, &args);
        }
        else
        {
            count += ft_print_char((int)*str);
        }
        str++;
    }
    va_end(args);
    return (count);
}