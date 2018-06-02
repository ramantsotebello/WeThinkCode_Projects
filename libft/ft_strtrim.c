/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 08:30:09 by egenis            #+#    #+#             */
/*   Updated: 2018/06/02 11:14:22 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

void	ft_bzero(void *s, size_t n)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)s)[cntr] = 0;
		++cntr;
	}
}

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	return (dst);
}


static	char	*ft_find_bgn_adrs(char const *s)
{
	char	*bgn_adrs;

	bgn_adrs = (char *)s;
	//printf("The char at bgn_adrs %p is %d\n", bgn_adrs, *bgn_adrs);
	while (*bgn_adrs && (*bgn_adrs ==  ' ' || *bgn_adrs == '\t' ||
			*bgn_adrs == '\n'))
		++bgn_adrs;
	//printf("The char at bgn_adrs %p is %d\n", bgn_adrs, *bgn_adrs);
	return (bgn_adrs);
}

static	char	*ft_find_end_adrs(char const *s)
{
	size_t	str_len;
	char	*end_adrs;

	str_len = ft_strlen(s);
	end_adrs = (char *)s + str_len;
	//printf("The char at end_adrs %p is %d\n", end_adrs, *end_adrs);
	while (end_adrs > s && (*end_adrs == '\0' || *end_adrs ==  ' '
			|| *end_adrs == '\t' || *end_adrs == '\n'))
		--end_adrs;
	//printf("The char at end_adrs %p is %d\n", end_adrs, *end_adrs);
	return (end_adrs);
}

char			*ft_strtrim(char const *s)
{
	char	*bgn_adrs;
	char	*end_adrs;
	char	*newstr;
	int		str_len;

	if (!s)
		return (NULL);
	bgn_adrs = ft_find_bgn_adrs(s);
	end_adrs = ft_find_end_adrs(s);
	//printf("The char at bgn_adrs %p is %d\n", bgn_adrs, *bgn_adrs);
	//printf("The char at end_adrs %p is %d\n", end_adrs, *end_adrs);
	str_len = end_adrs - bgn_adrs + 1;
	if (str_len < 0)
		str_len = 0;
	//printf("str_len is %d\n", str_len);
	newstr = ft_strnew(str_len);
	if (!newstr)
		return (NULL);
	if (str_len > 0)
		ft_memcpy(newstr, bgn_adrs, str_len);
	else
		newstr[0] = '\0';
	return (newstr);
}

int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	//printf("%s\n", s1);
	char *ans = ft_strtrim(s1);
	printf("%s\n", ans);
	//printf("The char count of trimmed string s1 is %zu\n", ft_strlen(ans));
	//printf("The decimal value of \'\\n\' and \'\\t\' is %d and %d, "
	//	"respectively\n", '\n', '\t');
	return (0);
}
