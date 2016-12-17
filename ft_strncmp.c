/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 12:34:45 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/17 14:12:43 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n && *s2)
    {
      if (ft_strcmp(s1, s2) != 0)
	     return (ft_strcmp(s1, s2));
      s1++;
      s2++;
      n--;
    }
  return (0);
}
