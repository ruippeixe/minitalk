#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("%ld\n", ft_strlen("Hello World")); // 11
// 	return 0;
// }