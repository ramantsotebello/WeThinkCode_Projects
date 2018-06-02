/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 13:13:02 by egenis            #+#    #+#             */
/*   Updated: 2018/06/02 15:10:21 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strclen(const char *s, const char c)
{
	size_t		cntr;
	t_uchar		ch;

	cntr = 0;
	ch = (t_uchar)c;
	if (!s)
		return (cntr);
	while (s[cntr] && s[cntr] != ch)
		++cntr;
	return (cntr);
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

	cntr = 0;
	ch = (t_uchar)c;
	wrd_adrs = NULL;
	if (!s)
		return (wrd_adrs);
	while (s[cntr])
	{
		wrd_adrs = &s[cntr];
		if (s[cntr] != ch)
			break ;
		++cntr;
	}
	return (wrd_adrs);
}

static	char		**ft_alloc_space(char const *s, char c)
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
	tmp = (char *)s;
	while (cntr < w_cnt)
	{
		tmp = ft_nxt_wrd_adrs(tmp, c);
		w_len = ft_strclen(tmp, c);
		ar[cntr] = ft_strnew(w_len);
		++cntr;
	}
	return (ar);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		cntr;
	size_t		w_cnt;
	char		**ar;

	cntr = 0;
	if (!s)
		return (NULL);
	w_cnt = ft_wrd_count(s, c);
	ar = ft_alloc_space(s, c);
}

int				main(void)
{
	char *ar = "*hello*fellow***students*";
	char **ans = ft_strsplit(ar, '*');
	for (int i = 0; i < 3; ++i)
		printf("%s\n", *ans[i]);
	return (0);
}
