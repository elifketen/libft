#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	size_t	i;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
ft_strchr() searches for a character within a string.

The function returns a pointer to the first occurrence of the character,
or NULL if the character is not found in the string.

Note: Casts c to char to ensure accurate comparison with
the characters in the string.

Note: Checks if (ch == '\0') to handle cases where the null terminator ('\0')
is the target character.
*/