

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				++j;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		++i;
	}
	return (0);
}
