#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
ft_isdigit() checks if a given character is a digit (0-9).

The function returns a non-zero value if true, or 0 if false.
*/