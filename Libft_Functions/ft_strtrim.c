/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:23:10 by oelboukh          #+#    #+#             */
/*   Updated: 2022/10/25 18:17:56 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[len]))
	{
		len--;
	}
	str = ft_substr(s1, 0, len + 1);
	return (str);
}
/**
int main(int argc, char const *argv[])
{
	char *s = ft_strtrim("   xxxtripouille", " x");
	printf("|%s|", s);
	return 0;
}*/
