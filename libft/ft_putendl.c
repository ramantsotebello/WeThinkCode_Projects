/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 07:31:22 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 07:34:08 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
		while (*s)
			write(1, &(*s++), 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char ar[] = "1234567890 LOLOL Dork!";
	char ar1[] = "";
	ft_putendl(ar);
	ft_putendl(ar1);
	return (0);
}
