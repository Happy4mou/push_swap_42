/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:16:57 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 13:58:05 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushb(t_node **stacka, t_node **stackb)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (*stacka == NULL)
		return ;
	tmp2 = *stackb;
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
	ft_putstr("pb\n");
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
	ft_putstr("rrb\n");
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
	ft_putstr("rb\n");
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
	ft_putstr("sb\n");
}
