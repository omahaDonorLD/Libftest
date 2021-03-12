#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

	p = str;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
