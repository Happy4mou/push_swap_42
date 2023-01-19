/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile2_B.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:26:41 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 16:17:25 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	add_node(t_node **tmp, t_node **tsv, int x, int c)
{
	if (c == 0)
	{
		if (c == 0)
			f_error();
	}
	else if (c == -1)
	{
		*tmp = new_node(x);
		(*tmp)->next = *tsv;
		*tsv = *tmp;
	}
}

void	f_full(t_funstack_a *var, t_node **tmp, t_node **tsv)
{
	while (--var->j >= 0)
	{
		if (ft_chek(var->p[var->j]))
			f_error();
		var->x = ft_atoi(var->p[var->j]);
		if (ft_check2(var->x, *tmp) == 0)
			f_error();
		add_node(tmp, tsv, var->x, -1);
	}
	ft_freeb(var->p);
}

t_node	*stack_a(int argc, char **argv)
{
	t_node			*tsv;
	t_node			*tmp;
	t_funstack_a	*var;

	var = malloc(sizeof(t_funstack_a));
	tsv = NULL;
	tmp = NULL;
	var->i = argc;
	while (--var->i > 0)
	{
		var->j = 0;
		var->j = ft_cnt(argv[var->i], ' ');
		var->p = ft_split(argv[var->i], ' ');
		add_node(&tmp, &tsv, var->x, var->j);
		f_full(var, &tmp, &tsv);
	}
	free(var);
	return (tmp);
}
