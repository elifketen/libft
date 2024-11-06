#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
ft_isalnum() checks if a given character is either an alphabetic letter
(uppercase or lowercase) or a digit (0-9).

The function returns a non-zero value if true, or 0 if false.
*/