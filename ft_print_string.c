#include "ft_printf.h"

int	ft_print_string(char *str)
{
    int	count;

	if(!str)
		str = "(null)";
	count = 0;
	while(str[count])
	{
		if(ft_print_char(str[count]) < 0)
			return(-1);
		count++;
	}
	return(count);
}
