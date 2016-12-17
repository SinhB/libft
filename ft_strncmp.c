/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 12:34:45 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/17 14:55:01 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n && *s2 && *s1 == *s2)
    {
      s1++;
      s2++;
      n--;
    }
  return (n ? *(unsigned char*)s1 - *(unsigned char*)s2 : 0);
}
