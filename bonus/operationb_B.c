/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationb_B.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:16:57 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 21:12:23 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pushb(t_node **stacka, t_node **stackb)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp2 = *stackb;
	if (*stacka == NULL)
		return ;
	tmp = (*stacka)->next;
	if (*stackb == NULL)
	{
		*stackb = *stacka;
		(*stackb)->next = NULL;
		*stacka = tmp;
	}
	else
	{
		tmp = (*stacka)->next;
		tmp2 = *stackb;
		*stackb = *stacka;
		(*stackb)->next = tmp2;
		*stacka = tmp;
	}
}

void	rev_rotateb(t_node **first)
{
	t_node	*tmp;
	t_node	*svn;

	tmp = NULL;
	svn = NULL;
	tmp = *first;
	svn = *first;
	if (sizell(*first) < 2)
		return ;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	while (svn->next != NULL)
		svn = svn->next;
	svn->next = *first;
	tmp->next = NULL;
	*first = svn;
}

void	rotateb(t_node **first)
{
	t_node	*tmp;

	tmp = NULL;
	tmp = *first;
	if (sizell(*first) < 2)
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *first;
	*first = (*first)->next;
	tmp = tmp->next;
	tmp->next = NULL;
}

void	swapb(t_node *first)
{
	int	swp;

	if (sizell(first) < 2)
		return ;
	swp = 0;
	swp = first->data;
	first->data = first->next->data;
	first->next->data = swp;
}
