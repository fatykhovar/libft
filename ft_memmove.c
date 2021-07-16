/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:52:07 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/01 15:51:52 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < len)
	{
		if (&dst1[i] < &src1[i])
		{
			dst1[i] = src1[i];
		}
		else
		{
			dst1[len - i - 1] = src1[len - i - 1];
		}
		i++;
	}
	return (dst1);
}
