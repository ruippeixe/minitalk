#include "ft_printf.h"

int	ft_format(const char *str, va_list args, int i)
{
	int	len;

	len = 0;
	if (str[i] == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (str[i] == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (str[i] == '%')
		len += ft_print_percent();
	else if (str[i] == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), 'x');
	else if (str[i] == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), 'X');
	else if (str[i] == 'p')
		len += ft_print_addr(va_arg(args, unsigned long));
	return (len);
}
