/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:14:53 by oelboukh          #+#    #+#             */
/*   Updated: 2022/10/25 13:50:22 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	handle_whit_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r' )
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	sing;
	int	result;

	result = 0;
	sing = 1;
	x = handle_whit_spaces((char *)str);
	if (str[x] == '-')
		sing *= -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + (str[x] - '0');
		x++;
	}
	return (result * sing);
}
