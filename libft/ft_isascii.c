/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:52:01 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 07:55:03 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_isascii(int c)
{
	return (((unsigned char)c >= 00 && (unsigned char)c <= 0177) ? 1 : 0);
}

int main(void)
{
	printf("The return val is %d\n", isascii(2000));
	printf("The return val is %d\n", ft_isascii(2000));
	return (0);
}
