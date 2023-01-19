/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:17:14 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 19:19:42 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstlast(t_node *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

int	max_exists(t_node *stack, int max)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->data == max)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	gete_elm_in_top(t_node **stack, t_pushina *var, int *s)
{
	if (var->index <= var->size / 2)
	{
		while ((*stack)->data != s[var->a_size])
			rotateb(stack);
	}
	if (var->index > var->size / 2)
	{
		while ((*stack)->data != s[var->a_size])
			rev_rotateb(stack);
	}
}

int	checkindex(int *s, int elm, int len)
{
	int	i;

	i = 0;
	while (i <= len / 2)
	{
		if (s[i] == elm)
			return (1);
		i++;
	}
	return (0);
}

int	check_first(t_node *stack, int min, int max)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->data <= max && stack->data >= min)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}
