#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}

/*
ft_tolower() converts an uppercase letter to its lowercase equivalent.

The function returns the converted character;
if the character is not an uppercase letter, it returns it unchanged.

Note: The original value of c is not modified;
the function only returns a new value.
*/