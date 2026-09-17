#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_pointer(void *pointer);
int ft_print_base(unsigned long number, const char *base, unsigned int base_length);
int	ft_print_number(int number);
int	ft_print_string(char *str);
int	ft_print_conversion(char specifier, va_list *args);
int ft_print_char(char c);
int	ft_printf(const char *format, ...);

#endif
