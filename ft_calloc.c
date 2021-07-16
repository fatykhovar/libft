/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:38:13 by bbathe            #+#    #+#             */
/*   Updated: 2021/04/24 20:09:46 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	ptr = 0;
	i = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	while (i < (int)(count * size))
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
