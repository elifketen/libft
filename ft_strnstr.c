#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);

		i++;
	}
	return (NULL);
}

/*
ft_strnstr() locates the first occurrence of the null-terminated string needle
in the string haystack, searching at most len characters.
Characters after a '\0' in haystack are not searched.

The function returns;
- If needle is an empty string, haystack is returned.
- If needle is not found, NULL is returned.
- If needle is found, a pointer to the first character of
the first occurrence is returned.

Note: Casting haystack to (char *) removes the const qualifier,
aligning with the function's return type.
*/