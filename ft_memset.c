/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:41:43 by bbathe            #+#    #+#             */
/*   Updated: 2021/04/18 18:05:37 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *memptr, int val, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((unsigned char *)memptr)[i] = (unsigned char)val;
		i++;
	}
	return (memptr);
}
