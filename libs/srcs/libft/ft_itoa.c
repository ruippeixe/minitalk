#include "libft.h"

static unsigned int	count_digits(int num)
{
	int			count;
	long int	number;

	count = 0;
	number = num;
	if (number <= 0)
	{
		count++;
		number *= -1;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			length;
	long int	num;
	char		*str;

	length = count_digits(n);
	num = n;
	str = malloc(sizeof(char) * (count_digits(num) + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	length--;
	if (num == 0)
		str[length] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[length] = (num % 10) + '0';
		num /= 10;
		length--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-42)); // -42
// 	printf("%s\n", ft_itoa(42)); // 42
//   return (0);
// }