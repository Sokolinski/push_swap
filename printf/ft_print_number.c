#include "ft_printf.h"

int ft_print_number(int n)
{
   int i;
   char *s;

   s = ft_itoa(n);
   if (!s)
       return (0);
   i = ft_print_string(s);
   free(s);
   return (i);
}
