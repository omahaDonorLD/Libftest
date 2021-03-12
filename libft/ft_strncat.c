#include "libft.h"

char	*ft_strncat(char *dest, const void *src, size_t size)
{
	ft_strncpy(dest + ft_strlen(dest), src, size);
	return (dest);
}
