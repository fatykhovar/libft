/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:17:29 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/10 15:43:05 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (s == 0)
		return (0);
	if (start < 0 || start > (unsigned int)ft_strlen((char *)s) - 1)
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s) - start)
		sub = (char *) malloc (ft_strlen((char *)s) - start + 1);
	else
		sub = (char *) malloc (len + 1);
	if (sub == 0)
		return (0);
	while (s[i] != '\0' && i < len && start < (unsigned int)ft_strlen((char *)s))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
