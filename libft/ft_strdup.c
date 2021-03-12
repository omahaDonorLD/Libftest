#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	pos;
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	pos = 0;
	while (s[pos])
	{
		dest[pos] = s[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
