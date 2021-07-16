/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:45:00 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/10 15:40:39 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	while ((*lst)-> next != 0)
	{
		*lst = (*lst)-> next;
	}
	(*lst)-> next = new;
	new ->next = 0;
}
