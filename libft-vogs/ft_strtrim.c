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

static	size_t	ft_calc_strlen(char const *s)
{
	size_t	cntr;
	size_t	str_len;

	cntr = 0;
	str_len = 0;
	if (!s)
		return (0);
	while (s[cntr] && (s[cntr] == ' ' || s[cntr] == '\n'|| s[cntr] == '\t'))
		++cntr;
	while (s[cntr] && (s[cntr] != ' ' || s[cntr] != '\n'|| s[cntr] != '\t'))
	{
		++cntr;
		++str_len;
	}
	return (str_len);
}

char			*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	str_len;
	size_t	cnt_s;
	size_t	cnt_n;

	if (!s)
		Return (NULL);
	str_len = ft_calc_strlen(s);
	newstr = ft_strnew(str_len);
	if !(newstr)
		return (NULL);
	cnt_s = 0;
	cnt_n = 0;
	while (s[cnt_s] && (s[cnt_s] == ' ' || s[cnt_s] == '\n'|| s[cnt_s] == '\t'))
		++cnt_s;
	while (s[cnt_s] && (s[cnt_s] != ' ' || s[cnt_s] != '\n'|| s[cnt_s] != '\t'))
	{
		newstr[cnt_n] = s[cnt_s];
		++cnt_n;
		++cnt_s;
	}
	return (newstr);
}