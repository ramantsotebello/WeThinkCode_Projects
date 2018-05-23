/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:27:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 07:38:27 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_isalnum(int c)
{
	return ((((unsigned char)c >= 060 && (unsigned char)c <= 071) ||
			((unsigned char)c >= 0101 && (unsigned char)c <= 0172)) ? 1 : 0);
}

int main(void)
{
	printf("The return val is %d\n", isalnum(0173));
	printf("The return val is %d\n", ft_isalnum(0173));
	return (0);
}
