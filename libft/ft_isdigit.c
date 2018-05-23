/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:15:51 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 07:26:30 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_isdigit(int c)
{
	return (((unsigned char)c >= 48 && (unsigned char)c <= 57) ? 1 : 0);
}

int main(void)
{
	printf("The return val is %d\n", isdigit(-3900));
	printf("The return val is %d\n", ft_isdigit(-3900));
	return (0);
}
