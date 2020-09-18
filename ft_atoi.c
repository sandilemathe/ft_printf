
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	size_t	j;

	j = 0;
	i = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			i = -i;
	while (*str > 47 && *str < 58)
	{
		if (i < 0 && (j > 922337203685477580 ||
					(j == 922337203685477580 && *str > 55)))
			return (0);
		if (j > 922337203685477580 ||
				(j == 922337203685477580 && *str > 55))
			return (-1);
		j *= 10;
		j += *str++ - '0';
	}
	return (j * i);
}
