#include "ft_printf.h"

int	ft_print_conversion(char specifier, va_list *args)
{
    if (specifier == 'c')
        return (ft_print_char((char)va_arg(*args, int)));
    if (specifier == '%')
        return (ft_print_char('%'));
    if (specifier == 's')
        return (ft_print_string(va_arg(*args, char *)));
    if (specifier == 'd' || specifier == 'i')
        return (ft_print_number(va_arg(*args, int)));
    if (specifier == 'u')
        return (ft_print_base(va_arg(*args, unsigned int), "0123456789", 10));
    if (specifier == 'x')
        return (ft_print_base(va_arg(*args, unsigned int), "0123456789abcdef", 16));
    if (specifier == 'X')
        return (ft_print_base(va_arg(*args, unsigned int), "0123456789ABCDEF", 16));
    if (specifier == 'p')
        return (ft_print_pointer(va_arg(*args, void *)));
    return (-1);
}
