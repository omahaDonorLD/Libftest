#include "libft.h"

size_t	ft_strlcat(char *dest, const void *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	res;

	len = ft_strlen(src);
	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	res = i + len;
	if (i == size)
		return (res);
	dest += i;
	size -= i;
	if (len >= size)
		len = size - 1;
	ft_memcpy(dest, src, len);
	dest[len] = '\0';
	return (res);
}

