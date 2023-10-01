#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int main(void) {
//   char str[] = "Hello World";
//   char *result = ft_memchr(str, 'W', 12); // World
//   printf("%s\n", result);
//   return 0;
// }