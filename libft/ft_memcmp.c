/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 17:36:15 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 18:04:53 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n && (((unsigned char *)s1)[cntr]) &&
			(((unsigned char *)s2)[cntr]) &&
			(((unsigned char *)s1)[cntr] ==
			 ((unsigned char *)s2)[cntr]))
	{
		++cntr;
	}
}
