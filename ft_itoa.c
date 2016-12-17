/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:22:01 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/17 19:18:11 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennbr(int n)
{
	size_t i;

	i = 1;
	if (n == -2147483648)
	{
		i += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n / 10)
		i += ft_lennbr(n / 10);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	size_t	lennbr;
	size_t	i;

	lennbr = ft_lennbr(n);
	if (!(new = ft_strnew(lennbr)))
		return (NULL);
	i = 0;
	if (n == 0 || n == - 2147483648)
		return (n == 0 ? ft_strdup("0" : ft_strdup("-2147483648")));
	if (n < 0)
	{
		n = -n;
		new[i] = '-';
	}
	lennbr = 1;
	while (n / lennbr)
		lennbr *= 10;
	lennbr /= 10;
	while (lennbr > 0)
	{
		new[i++] = (n / lennbr % 10 + 48);
		lennbr /= 10;
	}
	new[i] = '\0';
	return (new);
}
