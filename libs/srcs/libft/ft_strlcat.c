#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size <= dst_length || size == 0)
		return (size + src_length);
	while (i < (size - dst_length - 1) && src[i] != '\0')
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}

// int main(void)
// {
//     char src[6] = "World";
//     char dest[12] = "Hello ";
//     printf("%zu\n", ft_strlcat(dest, src, 8)); // 11
//     printf("%zu\n", ft_strlcat(dest, "hi", 0)); // 2
//     return 0;
// }