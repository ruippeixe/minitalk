#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && len > i)
	{
		while (big[i + j] == little[j] && len > (i + j))
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// int main(void)
// {
// 	char big[20] = "World Hello World";
// 	char little[10] = "Hello";
// 	printf("%s\n", ft_strnstr(big, little, 11)); // Hello World
// 	return (0);
// }