#include "ft_printf.h"

void	ft_put_hex(unsigned long n, char *hex)
{
	if (n < 16)
		ft_putchar(hex[n]);
	else if (n > 15)
	{
		ft_put_hex(n / 16, hex);
		ft_put_hex(n % 16, hex);
	}
	else
		ft_putchar(n + '0');
}

int	ft_print_hex(unsigned long n, char format)
{
	char	*lowercase_hex;
	char	*uppercase_hex;
	int		len;

	lowercase_hex = "0123456789abcdef";
	uppercase_hex = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	else
	{
		if (format == 'x')
			ft_put_hex(n, lowercase_hex);
		if (format == 'X')
			ft_put_hex(n, uppercase_hex);
	}
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}
