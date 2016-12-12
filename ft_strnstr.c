/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:59:15 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/12 12:35:25 by Yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;

	i = 0;
	if (!big)
	{
		if (*big == *little)
			return (big);
		else
			return (NULL);
	}
	while (*big)
	{
		if (ft_strnequ(little, big, ft_strlen(little)))
			if (ft_strlen(little) + i <= len)
				return (big);
		i++;
		big++;
	}
	return (NULL);
}
