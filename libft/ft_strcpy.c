#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char		*d;

	d = dest;
	while ((*dest++ = *src++) != '\0')
		/* does nothing */;
	return (d);
}
