/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:13:57 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/06 18:45:21 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	if (ft_strlen((char *)needle) == 0 || needle[j] == '\0')
		return ((char *)haystack);
	if (len == 0 || ft_strlen((char *)haystack) < ft_strlen((char *)needle))
		return (0);
	while (i < len && haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (haystack[i] == needle[j] && i < len && needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&((char *)haystack)[start]);
		i = start + 1;
	}
	return (0);
}
