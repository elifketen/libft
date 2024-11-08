#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new_str;
	size_t	i;

	len = ft_strlen(s1);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (*s1)
		new_str[i++] = *s1++;
	new_str[i] = '\0';
	return (new_str);
}

/*
ft_strdup() allocates memory for a copy of the
string s1, then performs the copy.

The function returns a pointer to the copy or NULL if memory allocation fails.
*/