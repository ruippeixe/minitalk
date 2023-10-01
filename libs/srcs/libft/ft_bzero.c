#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

// int main(void) {
//     char str[] = "hello world";
//     printf("Before bzero: %s\n", str); // hello world
//     ft_bzero(&str[2], 1);
//     printf("After bzero: %s\n", str); // he
//     return 0;
// }
