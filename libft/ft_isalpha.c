/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:53:58 by egenis            #+#    #+#             */
/*   Updated: 2018/05/30 12:36:57 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	t_uchar	ch;

	ch = (t_uchar)c;
	if (c > 122 || c < 65)
		return (0);
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return (1);
	return (0);
}

int	main(void)
{
	int i = -1;
	while (i < 530)
	{
		printf("\n");
		printf("for value %d isalpha returns %d\n", i, isalpha(i));
		printf("for value %d ft_isalpha returns %d\n", i, ft_isalpha(i));
		++i;
	}
	printf("\n");
	return (0);
}
