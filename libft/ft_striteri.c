/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:51:30 by egenis            #+#    #+#             */
/*   Updated: 2018/05/31 10:43:33 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of index i is to be the index of the character in string s.
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
		while (*s)
		{
			(*f)(i, s++);
			++i;
		}
}
