#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int main(void) {
//     char src[] = "Hello World";
//     char dest[12];

//     ft_memcpy(dest, src, 12);

//     printf("src: %s\n", src);
//     printf("dest: %s\n", dest);
//     return 0;
// }