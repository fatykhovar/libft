/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:38:05 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/23 17:36:22 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*first;

	if (lst == 0)
		return (0);
	res = ft_lstnew(f(lst -> content));
	if (res == 0)
		return (0);
	first = res;
	lst = lst -> next;
	while (lst != 0)
	{
		res -> next = ft_lstnew(f(lst -> content));
		if (res -> next == 0)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		lst = lst -> next;
		res = res -> next;
	}
	res -> next = 0;
	return (first);
}
