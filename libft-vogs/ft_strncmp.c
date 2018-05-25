/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:18:22 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 08:48:09 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cntr_s1;
	size_t	cntr_s2;

	cntr_s1 = 0;
	cntr_s2 = 0;
	while (s1[cntr_s1] == s2[cntr_s2] && s1[cntr_s1] && s1[cntr_s2] &&
		cntr_s1 < n)
	{
		++cntr_s1;
		++cntr_s2;
	}
	return (s1[cntr_s1] - s2[cntr_s2]);
}
