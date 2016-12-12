/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:36:47 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/12 12:29:55 by Yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *tmp;

	tmp = dest;
	while (n--)
	{
		if ((*tmp++ = *(unsigned char*)src++) == (unsigned char)c)
		{
			dest = tmp;
			return (dest);
		}
	}
	return (NULL);
}
