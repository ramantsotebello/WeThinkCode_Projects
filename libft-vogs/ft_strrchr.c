/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:12:30 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 08:46:28 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cntr;
	char	*last_ptr;

	cntr = 0;
	last_ptr = NULL;
	while (s[cntr])
	{
		if ((char)(s[cntr]) == (char)c)
			last_ptr = &((char *)s)[cntr];
		++cntr;
	}
	return (*last_ptr == (char)c ? last_ptr : NULL);
}
