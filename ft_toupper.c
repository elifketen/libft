#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

/*
ft_toupper() converts a lowercase letter to its uppercase equivalent.

The function returns the converted character;
if the character is not a lowercase letter, it returns it unchanged.

Note: The original value of c is not modified;
the function only returns a new value.
*/