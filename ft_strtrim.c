/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:16:18 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/11 15:40:14 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*new;
	size_t		i;
	size_t		j;

	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	if (!(s[i]))
		return (ft_strnew(1));
	j = (ft_strlen(s) - 1);
	while (ft_iswhitespace(s[j]))
		j--;
	j = j - i + 1;
	if (!(new = ft_strsub(s, i, j)))
		return (NULL);
	return (new);
}
