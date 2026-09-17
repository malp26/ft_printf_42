#include "ft_printf.h"

static	int	ft_parse_format(const char *format, va_list *args)
{
    int	index;
    int	count;
    int	printed;

	index = 0;
	count = 0;
	while(format[index])
	{
		if(format[index] == '%')
		{
			index++;
			printed = ft_print_conversion(format[index], args);
		}
		else
			printed = ft_print_char(format[index]);
		if(printed < 0)
			return (-1);
		count += printed;
		index++;
	}
	return(count);
}
int	ft_printf(const char *format, ...)
{
	va_list args;
	int	count;

	if(!format)
		return(-1);
	va_start(args, format);
	count = ft_parse_format(format, &args);
	va_end(args);
	return (count);
}
