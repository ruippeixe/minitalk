#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	src_length = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}

// int main(void)
// {
//     char src[12] = "Hello World";
//     char dest[12] = "World";
//     printf("%s\n", dest); // World
//     printf("%zu\n", ft_strlcpy(dest, src, 12)); // 11
//     return 0;
// }