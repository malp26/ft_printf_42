#include "ft_printf.h"

int ft_print_pointer(void *pointer)
{
    unsigned long   address;
    int             count;
    int             printed;

    if (!pointer)
        return(ft_print_string("(nil)"));
    address = (unsigned long)pointer;
    count = ft_print_string("0x");
    if (count < 0)
        return(-1);
    printed = ft_print_base(address, "0123456789abcdef", 16);
    if (printed < 0)
        return(-1);
    return(count + printed);
}
