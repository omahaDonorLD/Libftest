#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
		((unsigned char*)src)[pos++] = (unsigned char)c;
	return (src);
}
