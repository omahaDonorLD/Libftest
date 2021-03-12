// src : https://clc-wiki.net/wiki/Memmove

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest > src)
	{
		d = dest + n;
		s = src + n;
		while (n--)
			*--d = *--s;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
