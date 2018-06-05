/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 13:13:02 by egenis            #+#    #+#             */
/*   Updated: 2018/06/05 17:10:39 by egenis           ###   ########.fr       */
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

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	cntr;

	cntr = 0;
	ft_bzero(dst, len);
	while (cntr < len && src[cntr])
	{
		dst[cntr] = src[cntr];
		++cntr;
	}
	return (dst);
}

// wrd_1st is used as a switch to determine whether the pointer s points to a
// word already or not, in the case it does, then that word is counted and
// written to the array, Afterwards wrd_1st is set to 0.

static	size_t	ft_wrd_count(char const *s, char c)
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

static	char	*ft_nxt_wrd_adrs(char const *s, char c, _Bool *wrd_1st)
{
	size_t		cntr;
	char		*ptr;
	t_uchar		ch;

	cntr = 0;
	ch = (t_uchar)c;
	ptr = (char *)s;
	if (*wrd_1st)
	{
		*wrd_1st = 0;
		return (ptr);
	}
	while (ptr[cntr] && ptr[cntr] != ch)
		++cntr;
	while (ptr[cntr] && ptr[cntr] == ch)
		++cntr;
	return (&ptr[cntr]);
}

static	char	**ft_alloc_and_cpy(char const *s, char c, _Bool *wrd_1st)
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
		ar = (char**)malloc(1);
		ar[0] = NULL;
		return (ar);
	}
	ar = (char **)malloc(sizeof(char *) * wrd_count + 1);
	if (!ar)
		return (NULL);
	wrd_adrs = (char *)s;
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

int main(void)
{
	char *ar = "*Hello*There*Tyrone*";
	char **ans = ft_strsplit(ar, '*');
	for (int i = 0; i < 3; ++i)
		printf("%s\n", ans[i]);
	return (0);
}
