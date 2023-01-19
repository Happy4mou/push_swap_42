/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:14:12 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 15:41:01 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_node **stacka, t_node **stackb)
{
	rotatea(stacka);
	rotateb(stackb);
	ft_putstr("rr\n");
}

void	rrr(t_node **stacka, t_node **stackb)
{
	rev_rotatea(stacka);
	rev_rotateb(stackb);
	ft_putstr("rrr\n");
}

void	ss(t_node **stacka, t_node **stackb)
{
	swapa(*stacka);
	swapb(*stackb);
	ft_putstr("ss\n");
}

void	f_freestacka(t_node **stack)
{
	while (*stack)
	{
		free(*stack);
		*stack = (*stack)->next;
	}
	free(*stack);
}
