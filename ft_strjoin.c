#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (*s1)
		new_str[i++] = *s1++;
	while (*s2)
		new_str[i++] = *s2++;
	new_str[i] = '\0';
	return (new_str);
}

/*
ft_strjoin() allocates memory and combines 's1' and 's2' into a new string.

The function returns the new string or NULL if memory allocation fails.
*/