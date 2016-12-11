/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:28:52 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/11 15:14:38 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	int result;
	int nega;
	int i;

	result = 0;
	nega = 1;
	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			nega = -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		result += s[i] - 48;
		if (ft_isdigit(s[i]))
			result *= 10;
		i++;
	}
	return (result * nega);
}
