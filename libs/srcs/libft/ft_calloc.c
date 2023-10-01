#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, nmeb * size);
	return (ptr);
}
