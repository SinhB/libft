/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:28:52 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/17 18:51:41 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	long res;
	long nega;

	res = 0;
	nega = 1;
	i = 0;
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			nega = -1;
		s++;
	}
	while (*s && ft_isdigit(*s))
	{
		res += *s - 48;
		if (ft_isdigit(*s + 1))
			res *= 10;
		s++;
	}
	return (res * nega);
}
