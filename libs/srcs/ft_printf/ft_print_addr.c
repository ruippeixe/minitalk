#include "ft_printf.h"

int	ft_print_addr(unsigned long n)
{
	int	len;

	len = 0;
	if (n)
	{
		len += write(1, "0x", 2);
		len += ft_print_hex(n, 'x');
		return (len);
	}
	else
		return (write(1, "(nil)", 5));
}
