/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:30:43 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/16 10:54:43 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *i;

    while (*alst)
    {
        i = (*alst)->next;
        ft_lstdelone(alst, del);
        *alst = i;
    }
}
