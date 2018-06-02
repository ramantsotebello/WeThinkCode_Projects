/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 08:29:11 by egenis            #+#    #+#             */
/*   Updated: 2018/06/02 08:51:35 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_find_bgn_adrs(char const *s)
{
	char	*bgn_adrs;

	bgn_adrs = (char *)s;
	while (*bgn_adrs && (*bgn_adrs ==  ' ' || *bgn_adrs == '\t' ||
			*bgn_adrs == '\n'))
		++bgn_adrs;
	return (bgn_adrs);
}

static	char	*ft_find_end_adrs(char const *s)
{
	size_t	str_len;
	char	*end_adrs;

	str_len = ft_strlen(s);
	end_adrs = (char *)s + str_len;
	while (end_adrs > s && (*end_adrs == '\0' || *end_adrs ==  ' '
			|| *end_adrs == '\t' || *end_adrs == '\n'))
		--end_adrs;
	return (end_adrs);
}

char			*ft_strtrim(char const *s)
{
	char	*bgn_adrs;
	char	*end_adrs;
	char	*newstr;
	size_t	str_len;

	if (!s)
		return (NULL);
	bgn_adrs = ft_find_bgn_adrs(s);
	end_adrs = ft_find_end_adrs(s);
	//printf("The char at bgn_adrs %p is %d\n", bgn_adrs, *bgn_adrs);
	//printf("The char at end_adrs %p is %d\n", end_adrs, *end_adrs);
	str_len = end_adrs - bgn_adrs + 1;
	//printf("str_len is %zu\n", str_len);
	newstr = ft_strnew(str_len);
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, bgn_adrs, str_len);
	return (newstr);
}
