#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

// void main(void)
// {
//     char str[50] = "hello world";
//     printf("Before memset: %s\n", str); // hello world
//     ft_memset(str, 'A', 5);
//     printf("After ft_memset: %s\n", str); // AAAAA world
// }