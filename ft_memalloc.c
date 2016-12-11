/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:34:05 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/11 13:34:32 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	if ((alloc = (void*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(alloc, size);
	return (alloc);
}
