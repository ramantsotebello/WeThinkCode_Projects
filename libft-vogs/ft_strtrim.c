

#include "libft.h"

static	char	*ft_find_bgn_addr(char const *s)
{
	char	*bgn_addr;

	bgn_addr = (char *)s;
	while (*bgn_addr && (*bgn_addr ==  ' ' || *bgn_addr == '\t' ||
			*bgn_addr == '\n'))
		++bgn_addr;
	return (bgn_addr);
}

static	char	*ft_find_end_addr(char const *s)
{
	size_t	str_len;
	char	*end_addr;

	str_len = ft_strlen(s);
	end_addr = (char *)s + str_len;
	while ((*end_addr ==  ' ' || *end_addr == '\t' ||
			*end_addr == '\n'))
		--end_addr;
	return (end_addr);
}

char			*ft_strtrim(char const *s)
{
	char	*bgn_addr;
	char	*end_addr;
	char	*newstr;
	size_t	str_len;

	if (!s)
		return (NULL);
	bgn_addr = ft_find_bgn_addr(s);
	end_addr = ft_find_end_addr(s);
	str_len = end_addr - bgn_addr;
	newstr = ft_strnew(str_len);
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, bgn_addr, str_len);
	return (newstr);
}