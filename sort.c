/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:39:34 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/14 22:09:01 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sara(t_node **stack)
{
	rotatea(stack);
	swapa(*stack);
}

void	rrasa(t_node **stack)
{
	rev_rotatea(stack);
	swapa(*stack);
}

void	sort_2(t_node **stack)
{
	if ((*stack)->data > (*stack)->next->data)
		swapa(*stack);
}

void	sort_3(t_node **stack)
{
	int	min;
	int	max;

	min = get_min(*stack);
	max = get_max(*stack);
	if (sizell(*stack) == 1)
		exit(0);
	if (sizell(*stack) == 2)
		sort_2(stack);
	else
	{
		if ((*stack)->data == max && (*stack)->next->data == min)
			rotatea(stack);
		if ((*stack)->next->data == min && (*stack)->next->next->data == max)
			swapa(*stack);
		if ((*stack)->data == min && (*stack)->next->data == max)
			rrasa(stack);
		if ((*stack)->data == max && (*stack)->next->next->data == min)
			sara(stack);
		if ((*stack)->next->data == max && (*stack)->next->next->data == min)
			rev_rotatea(stack);
	}
}

void	sort_5(t_node **stacka, t_node **stackb)
{
	pushsinb(stacka, stackb);
	sort_3(stacka);
	while (*stackb)
	{
		pusha(stackb, stacka);
	}
}
