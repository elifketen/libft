#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
ft_isprint() checks if a given character is
a printable character (including space).

The function returns a non-zero value if true, or 0 if false.

NOTE: Printable characters have a visible output on the screen,
unlike control characters (such as newline or tab).

NOTE: The isgraph() function tests for any printable character
except the space (' ') character.
*/