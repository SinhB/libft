/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:01:37 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/08 14:07:50 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strcat(char *dest, const char *src)
{
	size_t i;

	i = ft_strlen(dest);
	while (*src)
		dest[i++] = src++;
	dest[i] = '\0';
	return (dest);
}
