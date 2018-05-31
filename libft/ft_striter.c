/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:37:01 by egenis            #+#    #+#             */
/*   Updated: 2018/05/31 09:43:23 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	str_len;
	size_t	cntr;

	if (s)
	{
		str_len = ft_strlen((const char *)s);
		cntr = 0;
		while (cntr < str_len)
		{
			(*f)(&s[cntr]);
			++cntr;
		}
	}
}
