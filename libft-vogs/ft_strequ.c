/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:37:22 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 16:38:42 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	cntr;

	if (s1 && s2)
	{
		cntr = 0;
		while (s1[cntr] == s2[cntr] && s1[cntr] && s2[cntr])
			++cntr;
		if (!(s1[cntr] && s2[cntr]))
			return (1);
	}
	return (0);
}
