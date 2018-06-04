/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 07:09:43 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 07:28:03 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putstr(char const *s)
{
	if (s)
		while (*s)
			write(1, &(*s++), 1);
}

int	main(void)
{
	char ar[] = "1234567890 LOLOL Dork!";
	char ar1[] = "";
	ft_putstr(ar);
	ft_putstr(ar1);
	return (0);
}
