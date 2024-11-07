#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/*
ft_strrchr() searches for a character within a string.

The function returns a pointer to the last occurrence of the character,
or NULL if the character is not found in the string.

Note: Casts c to char to ensure accurate comparison with
the characters in the string.

Note: Since s[len] points to the null terminator, the function can handle cases
where '\0' is the target character by returning a pointer to s[len].

Note: The cast ((char *)&s[len]) is necessary to match
the expected return type of the function.
*/