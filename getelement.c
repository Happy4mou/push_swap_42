/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getelement.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:25:03 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 13:41:46 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_node *lle)
{
	t_node	*tmp;
	int		min;

	tmp = NULL;
	tmp = lle;
	min = tmp->data;
	while (tmp->next != NULL)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	if (tmp->data < min)
		min = tmp->data;
	return (min);
}

int	get_max(t_node *lle)
{
	t_node	*tmp;
	int		max;

	tmp = NULL;
	tmp = lle;
	max = tmp->data;
	while (tmp->next != NULL)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	if (tmp->data > max)
		max = tmp->data;
	return (max);
}

int	get_index(t_node *lli, int tofinde)
{
	t_node	*tmp;
	int		i;

	tmp = lli;
	i = 0;
	while (tmp)
	{
		if (tmp->data == tofinde)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}
