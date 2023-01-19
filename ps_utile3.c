/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:02:31 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/15 16:58:08 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_gepelm(t_node **stacka, t_node **stackb, t_pushina *var, int *s)
{
	if ((*stackb)->data == s[var->a_size])
	{
		pusha(stackb, stacka);
		var->a_size--;
	}
	else if (var->down == 0 || (*stackb)->data > ft_lstlast(*stacka)->data)
	{
		(pusha(stackb, stacka), rotatea(stacka));
		var->down++;
	}
	else if ((*stackb)->data != s[var->a_size])
	{
		var->index = get_index(*stackb, s[var->a_size]);
		gete_elm_in_top(stackb, var, s);
	}
}

void	pushsina(t_node **stackb, t_node **stacka, int *s)
{
	t_pushina	*var;

	var = malloc(sizeof(t_pushina));
	var->down = 0;
	var->a_size = sizell(*stackb) - 1;
	while ((*stackb) || var->a_size >= 0)
	{
		var->size = sizell(*stackb);
		if (max_exists(*stackb, s[var->a_size]))
			ft_gepelm(stacka, stackb, var, s);
		else
		{
			rev_rotatea(stacka);
			var->down--;
			var->a_size--;
		}
	}
	free(var);
}

void	f_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
