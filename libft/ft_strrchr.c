#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	size_t		n;

	n = ft_strlen(s);
	p = s + n;
	n++;
	while (n-- && *p != (char)c)
		if (p-- == s)
			return (NULL);
	return ((char *)p);
}
