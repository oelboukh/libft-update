/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:43:36 by oelboukh          #+#    #+#             */
/*   Updated: 2022/10/25 14:40:44 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sr;
	char		*dest;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = dst;
	sr = src;
	i = 0;
	while (i < n)
	{
	dest[i] = sr[i];
	i++;
	}
	return (dst);
}
