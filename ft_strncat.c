/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:53:13 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/11 13:53:36 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i++ < n && src[i++] != '\0')
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
