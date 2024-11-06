#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
ft_isascii() checks if a given character is part of
the ASCII character set (values from 0 to 127).

The function returns a non-zero value if true, or 0 if false.
*/