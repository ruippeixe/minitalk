#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int main(void) {
//     char src[12] = "Hello World";
// 		char dest[12];

//     ft_memmove(dest, src, 5);

//     printf("src : %s\n", src); // Hello World
//     printf("dest: %s\n", dest); // Hello

//     return 0;
// }