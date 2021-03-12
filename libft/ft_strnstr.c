#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	while (size >= s2_len)
	{
		size--;
		if (!ft_memcmp(s1, s2, s2_len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

