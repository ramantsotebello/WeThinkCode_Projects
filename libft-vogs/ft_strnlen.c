

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	cntr;

	cntr = 0;
	if (!s)
		return (0);
	while (cntr < maxlen && s[cntr])
		++cntr;
	return (cntr);
}