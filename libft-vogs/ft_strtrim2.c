/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:46:58 by egenis            #+#    #+#             */
/*   Updated: 2018/05/31 18:40:07 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static	size_t	ft_calc_whitespaces(char const *s)
{
	size_t	cntr;
	size_t	wht_spcs;

	cntr = 0;
	wht_spcs = 0;
	if (!s)
		return (0);
	while (s[cntr])
	{
		if (s[cntr] == ' ' || s[cntr] == '\n'|| s[cntr] == '\t')
			++wht_spcs;
		++cntr;
	}
	return (wht_spcs);
}

char			*ft_strtrim(char const *s)
{
	size_t	cntr;
	size_t	cntr_s;
	size_t	wht_spcs;
	size_t	str_len;
	char	*newstr;

	cntr = 0;
	cntr_s = 0;
	if (!s)
		return (NULL);
	wht_spcs = ft_calc_whitespaces(s);
	str_len = ft_strlen(s) - wht_spcs;
	newstr = ft_strnew(str_len);
	if (!newstr)
		return (NULL);
	ft_bzero(newstr, str_len + 1);
	while (s[cntr_s])
	{
		while (s[cntr_s] == ' ' || s[cntr_s] == '\n'|| s[cntr_s] == '\t')
			++cntr_s;
		newstr[cntr] = s[cntr_s];
		++cntr;
		++cntr_s;
	}
	return (newstr);
}
*/

static	_Bool	ft_has_whtspcs(char const *s)
{
	size_t	cntr;
	_Bool	ans;

	cntr = 0;
	ans = 0;
	if (!s)
		return (0);
	while (s[cntr])
	{
		if (s[cntr] == ' ' || s[cntr] == '\n'|| s[cntr] == '\t')
		{
			ans = 1;
			break ;
		}
		++cntr;
	}
	return (ans);
}

static	size_t	ft_absolute_strlen(char const *s)
{
	size_t	cntr;
	size_t	str_len;

	cntr = 0;
	str_len = 0;
	if (!s)
		return (0);
	while (s[cntr] && (s[cntr] == ' ' || s[cntr] == '\n' || s[cntr] == '\t'))
		++cntr;
	while (s[cntr] && (s[cntr] != ' ' || s[cntr] != '\n' || s[cntr] != '\t'))
	{
		++cntr;
		++str_len;
	}
	return (str_len);
}

static	void	ft_cpy_str(char *dst, char const *src)
{
	size_t	cntr_dst;
	size_t	cntr_src;

	cntr_dst = 0;
	cntr_src = 0;
	if (dst && src)
	{
		while (src[cntr_src] && (src[cntr_src] == ' ' || src[cntr_src] == '\n' ||
			src[cntr_src] == '\t'))
			++cntr_src;
		while (src[cntr_src] && (src[cntr_src] != ' ' || src[cntr_src] != '\n' ||
			src[cntr_src] != '\t'))
		{
			dst[cntr_dst] = src[cntr_src];
			++cntr_dst;
			++cntr_src;
		}
	}
	return ;
}

char			*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	str_len;
	size_t	cnt_s;
	size_t	cnt_n;
	_Bool	has_whtspcs;

	cnt_s = 0;
	cnt_n = 0;
	if (!s)
		return (NULL);
	str_len = ft_absolute_strlen(s);
	newstr = ft_strnew(str_len);	
	if (!newstr)
		return (NULL);
	has_whtspcs = ft_has_whtspcs(s);
	if (!has_whtspcs)
		ft_memcpy(newstr, s, str_len);
	else
		ft_cpy_str(newstr, s);
	return (newstr);
}