/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:14:21 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 14:28:13 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	int nul_pos;
	int s2_cntr;
	size_t num_count;

	nul_pos = 0;
	s2_cntr = 0;
	num_count = 0;
	while (s1[nul_pos])
		++nul_pos;
	while (s2[s2_cntr] && num_count < n)
	{
		s1[nul_pos] = s2[s2_cntr];
		++nul_pos;
		++s2_cntr;
		++num_count;
	}
	s1[nul_pos] = '\0';
	return (s1);
}
