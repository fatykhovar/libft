/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:50:33 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/06 19:09:01 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dsts;

	i = 0;
	j = 0;
	dsts = ft_strlen(dst);
	if ((size_t)ft_strlen(dst) > dstsize || dstsize == 0)
		return (dstsize + ft_strlen((char *)src));
	while (dst[j] != '\0')
		j++;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dsts + ft_strlen((char *)src));
}
