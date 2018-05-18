/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:28:46 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 15:02:24 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len)
{
	size_t cntr;

	cntr = 0;
	while (cntr < len)
	{
		((unsigned char *)b)[cntr] = (unsigned char)c;
		++cntr;
	}
	return (b);
}
