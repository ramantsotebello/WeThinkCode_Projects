/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:16:43 by egenis            #+#    #+#             */
/*   Updated: 2018/05/30 06:45:39 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	t_uchar	*s1_p;
	t_uchar	*s2_p;
	size_t	cntr;

	s1_p = (t_uchar *)s1;
	s2_p = (t_uchar *)s2;
	cntr = 0;
	while (s1_p[cntr] == s2_p[cntr] && s1_p[cntr] && s2_p[cntr])
		++cntr;
	return ((int)(s1_p[cntr] - s2_p[cntr]));
}

int	main(void)
{
	char ar1[] = "dsfsadfsdf";
	char ar2[] = "dfasdfs";
	printf("strcmp puts the diff at %d\n", strcmp(ar1, ar2));
	printf("ft_strcmp puts the diff at %d\n", ft_strcmp(ar1, ar2));
	return (0);
}
