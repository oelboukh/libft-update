/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:17:51 by oelboukh          #+#    #+#             */
/*   Updated: 2022/10/25 14:20:18 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				tmp->next = new;
				break ;
			}
			tmp = tmp->next;
		}
	}
}
