#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
int     ft_print_char(int c);
int     ft_print_number(int n);
int     ft_print_string(char *s);
int     ft_print_hex(unsigned int n, bool uppercase);
int     ft_print_ptr(void *p);
int     ft_print_unsigned(unsigned int n);
int	    ft_print_percent(void);
int ft_printf(const char *str, ...);

#endif