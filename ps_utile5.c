/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:10:08 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/14 22:09:42 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_elem_to_top(t_node **stack, int pos)
{
	int	i;

	i = 0;
	if (pos <= sizell(*stack) / 2)
	{
		while (i < pos)
			(rotatea(stack), i++);
	}
	else
	{
		while (i + pos < sizell(*stack))
			(rev_rotatea(stack), i++);
	}
}

int	check_nbr_exist(t_node **stack, int *s, t_pushsrtinb *var, int *index)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->data >= s[var->start] && tmp->data <= s[var->end])
			return (1);
		tmp = tmp->next;
		(*index)++;
	}
	return (0);
}

void	ft_rang(t_pushsrtinb *var)
{
	var->start -= var->offset;
	var->end += var->offset;
	if (var->end > var->len - 1)
		var->end = var->len - 1;
	if (var->start < 0)
		var->start = 0;
}

void	pushsrtinb(t_node **stacka, t_node **stackb, int *s, int dvs)
{
	t_pushsrtinb	*var;

	var = malloc(sizeof(t_pushsrtinb));
	var->len = sizell(*stacka);
	var->mid = var->len / 2 - 1;
	var->offset = var->len / dvs;
	var->start = var->mid - var->offset;
	var->end = var->mid + var->offset;
	while (*stacka)
	{
		var->pos = check_first(*stacka, s[var->start], s[var->end]);
		while (var->pos >= 0)
		{
			(get_elem_to_top(stacka, var->pos), pushb(stacka, stackb));
			if ((*stackb)->data < s[var->mid])
				rotateb(stackb);
			var->pos = check_first(*stacka, s[var->start], s[var->end]);
		}
		ft_rang(var);
	}
	free(var);
}

void	sort_big(t_node **stacka, t_node **stackb, int dvs)
{
	int	*s;
	int	len;

	(void)stackb;
	len = sizell(*stacka);
	s = malloc((sizell(*stacka) - 1) * sizeof(int));
	sortarray(*stacka, s);
	pushsrtinb(stacka, stackb, s, dvs);
	pushsina(stackb, stacka, s);
	free(s);
}
