/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationa_B.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:41:34 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 17:39:14 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swapa(t_node *first)
{
	int	swp;

	swp = 0;
	if (sizell(first) >= 2)
	{
		swp = first->data;
		first->data = first->next->data;
		first->next->data = swp;
	}
}

void	rotatea(t_node **first)
{
	t_node	*tmp;

	tmp = NULL;
	tmp = *first;
	if (sizell(*first) >= 2)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = *first;
		*first = (*first)->next;
		tmp = tmp->next;
		tmp->next = NULL;
	}
}

void	rev_rotatea(t_node **first)
{
	t_node	*tmp;
	t_node	*svn;

	tmp = NULL;
	svn = NULL;
	tmp = *first;
	svn = *first;
	if (sizell(*first) >= 2)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		while (svn->next != NULL)
			svn = svn->next;
		svn->next = *first;
		tmp->next = NULL;
		*first = svn;
	}
}

void	pusha(t_node **stackb, t_node **stacka)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!*stackb)
		return ;
	tmp = (*stackb)->next;
	tmp2 = *stackb;
	if (*stacka == NULL)
	{
		*stacka = *stackb;
		(*stacka)->next = NULL;
		*stackb = tmp;
	}
	else
	{
		tmp = (*stackb)->next;
		tmp2 = *stacka;
		*stacka = *stackb;
		(*stacka)->next = tmp2;
		*stackb = tmp;
	}
}
