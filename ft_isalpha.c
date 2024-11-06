#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
ft_isalpha() checks if a given character is an alphabetic letter
(either uppercase or lowercase).

The function returns a non-zero value if true, or 0 if false.
*/