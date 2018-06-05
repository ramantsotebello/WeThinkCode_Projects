/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:18:28 by egenis            #+#    #+#             */
/*   Updated: 2018/06/05 17:49:01 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wrd_count(char *s, char c)
{
	size_t		cntr;
	size_t		wrd_count;
	_Bool		swtch;
	t_uchar		ch;

	cntr = 0;
	wrd_count = 0;
	swtch = 0;
	ch = (t_uchar)c;
	while (s[cntr])
	{
		if (s[cntr] != ch && swtch == 0)
			++wrd_count;
		if (s[cntr] != ch)
			swtch = 1;
		if (s[cntr] == ch)
			swtch = 0;
		++cntr;
	}
	return (wrd_count);
}

static	char	*ft_nxt_wrd_adrs(char *s, char c, _Bool *wrd_1st)
{
	size_t		cntr;
	t_uchar		ch;

	cntr = 0;
	ch = (t_uchar)c;
	if (*wrd_1st)
	{
		*wrd_1st = 0;
		return (s);
	}
	while (s[cntr] && s[cntr] != ch)
		++cntr;
	while (s[cntr] && s[cntr] == ch)
		++cntr;
	return (&s[cntr]);
}

static	char	**ft_alloc_space(char *s, char c)
{
	size_t		cntr;
	size_t		wrd_count;
	size_t		wrd_len;
	char		*wrd_adrs;
	char		**ar;


}

/*
static	char	**ft_alloc_and_cpy(char *s, char c, _Bool *wrd_1st)
{
	size_t		cntr;
	size_t		wrd_count;
	size_t		wrd_len;
	char		*wrd_adrs;
	char		**ar;

	cntr = 0;
	wrd_count = ft_wrd_count(s, c);
	if (!wrd_count)
	{
		ar = (char **)malloc(1);
		ar[0] = NULL;
		return (ar);
	}
	ar = (char **)malloc(sizeof(char *) * wrd_count + 1);
	wrd_adrs = s;
	while (cntr < wrd_count)
	{
		wrd_adrs = ft_nxt_wrd_adrs(wrd_adrs, c, wrd_1st);
		wrd_len = ft_strclen(wrd_adrs, c);
		ar[cntr] = ft_strnew(wrd_len);
		ar[cntr] = ft_strncpy(ar[cntr], wrd_adrs, wrd_len);
		++cntr;
	}
	ar[wrd_count] = NULL;
	return (ar);
}

char			**ft_strsplit(char const *s, char c)
{
	_Bool		wrd_1st;
	char		**ar;
	t_uchar		ch;

	ch = (t_uchar)c;
	if (!s)
		return (NULL);
	wrd_1st = (*s != ch) ? 1 : 0;
	ar = ft_alloc_and_cpy(s, c, &wrd_1st);
	return (ar);
}
*/
