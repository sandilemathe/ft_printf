
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
**int		main(void)
**{
**	char	str[] = "Hello je tesx";
**
**	if (strchr(str, 'H') != ft_strchr(str, 'H'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'j') != ft_strchr(str, 'j'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'x') != ft_strchr(str, 'x'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'y') != ft_strchr(str, 'y'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 0) != ft_strchr(str, 0))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
