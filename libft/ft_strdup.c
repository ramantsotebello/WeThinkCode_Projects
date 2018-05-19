/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 10:02:43 by egenis            #+#    #+#             */
/*   Updated: 2018/05/19 11:10:33 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	unsigned long cntr;
	unsigned long strlen;
	char *str_ptr; 

	cntr = 0;
	strlen = 0;
	while (s1[strlen])
		++strlen;
	str_ptr = (char *)malloc(sizeof(char) * strlen);
	if (!(str_ptr))
		return (NULL);
	while (cntr < strlen)
	{
		str_ptr[cntr] = s1[cntr];
		++cntr;
	}
	str_ptr[cntr] = '\0';
	return (str_ptr);
}
