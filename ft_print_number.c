#include "ft_printf.h"

static int	ft_print_digits(long number)
{
	int	count;
	int	printed;

	count = 0;
	if (number >= 10)
	{
		count = ft_print_digits(number / 10);
		if (count < 0)
			return (-1);
	}
	printed = ft_print_char((char)(number % 10 + '0'));
	if (printed < 0)
		return (-1);
	return (count + printed);
}

int	ft_print_number(int number)
{
	long	value;
	int		count;
	int		printed;

	value = number;
	count = 0;
	if (value < 0)
	{
		if (ft_print_char('-') < 0)
			return (-1);
		count = 1;
		value = -value;
	}
	printed = ft_print_digits(value);
	if (printed < 0)
		return (-1);
	return (count + printed);
}
