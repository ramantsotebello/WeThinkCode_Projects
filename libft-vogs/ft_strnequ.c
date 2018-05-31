/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:00:44 by egenis            #+#    #+#             */
/*   Updated: 2018/05/31 15:09:31 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	cntr;

	if (s1 && s2)
	{
		cntr = 0;
		while (s1[cntr] == s2[cntr] && s1[cntr] && s2[cntr] && cntr < n)
			++cntr;
		if (!(s1[cntr] && s2[cntr]))
			return (1);
	}
	return (0);
}
