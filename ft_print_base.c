#include "ft_printf.h"

int ft_print_base(unsigned long number, const char *base, unsigned int base_length)
{
	int	count;
	int	printed;

	count = 0;
	if (number >= base_length)
	{
		count = ft_print_base(number / base_length, base, base_length);
		if (count < 0)
			return(-1);
	}
	printed = ft_print_char(base[number % base_length]);
	if (printed < 0)
		return(-1);
	return(count + printed);
}
