/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:03:39 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 10:25:17 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		while (*s)
			write(fd, &(*s++), 1);
}

int main(void)
{
	char ar[] = "Hello There!";
	ft_putstr_fd(ar, -1);
	return (0);
}
