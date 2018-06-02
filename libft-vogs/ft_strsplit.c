/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:31:55 by egenis            #+#    #+#             */
/*   Updated: 2018/06/02 16:58:20 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wrd_count(char const *s, char c)
{
	size_t		cntr;
	size_t		w_cnt;
	_Bool		swtch;

	cntr = 0;
	w_cnt = 0;
	swtch = 0;
	if (!s)
		return (0);
	while (s[cntr])
	{
		if (s[cntr] != (t_uchar)c && !swtch)
		{
			++w_cnt;
			swtch = 1;
		}
		++cntr;
		if (s[cntr] == (t_uchar)c)
			swtch = 0;
	}
	return (w_cnt);
}

static	char	*ft_nxt_wrd_adrs(char const *s, char c)
{
	size_t		cntr;
	t_uchar		ch;
	char		*wrd_adrs;
	_Bool		swtch;

	cntr = 0;
	ch = (t_uchar)c;
	wrd_adrs = NULL;
	swtch = 0;
	if (!s)
		return (wrd_adrs);
	while (s[cntr])
	{
		if (s[cntr] == ch)
			swtch = 1;
		if (s[cntr] != ch && swtch)
		{
			wrd_adrs = (char *)&s[cntr];
			break ;
		}
		++cntr;
	}
	return (wrd_adrs);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		cntr;
	size_t		w_cnt;
	size_t		w_len;
	char		*tmp;
	char		**ar;

	cntr = 0;
	if (!s)
		return (NULL);
	w_cnt = ft_wrd_count(s, c);
	ar = (char **)malloc(sizeof(char *) * w_cnt);
	if (!ar)
		return (NULL);
	tmp = (char *)s;
	while (cntr < w_cnt)
	{
		tmp = ft_nxt_wrd_adrs(tmp, c);
		w_len = ft_strclen(tmp, c);
		ar[cntr] = ft_strnew(w_len);
		ar[cntr] = ft_strncpy(ar[cntr], tmp, w_len);
		++cntr;
	}
	return (ar);
}
