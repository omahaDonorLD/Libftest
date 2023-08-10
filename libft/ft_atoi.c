#include "libft.h"

int	ft_atoi(const char* str)
{
	int		sign;
	long int	val;

	sign = 1;
	val = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	return (val * sign);
}
