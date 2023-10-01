#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_format(const char *str, va_list args, int i);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_print_percent(void);
int	ft_print_hex(unsigned long n, char format);
int	ft_print_addr(unsigned long n);

#endif
