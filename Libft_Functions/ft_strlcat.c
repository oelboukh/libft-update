/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:58:10 by oelboukh          #+#    #+#             */
/*   Updated: 2022/10/25 16:27:34 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	t;
	size_t	x;
	size_t	z;

	i = 0;
	t = 0;
	z = 0;
	while (dest[t])
		t++;
	x = t;
	while (src[i])
		i++;
	if (x >= size)
		return (i + size);
	while (src[z] && t + 1 < size)
	{
		dest[t] = src[z];
		z++;
		t++;
	}
	dest[t] = 0;
	return (i + x);
}
/***
int main(int argc, char const *argv[])
{
	char buff2[4] = "";
	printf("%d\n", ft_strlcat(buff2, "the cake is a lie !\0I'm hidden lol\r\n", 4));
	//printf("%s\n", ft_strlcat(buff2, str, max));
}
*/
