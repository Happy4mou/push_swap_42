/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:30:10 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 13:43:21 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int x)
{
	t_node	*newn;

	newn = malloc(sizeof(t_node));
	newn->data = x;
	newn->next = NULL;
	return (newn);
}

int	sizell(t_node *lls)
{
	t_node	*tmp;
	int		i;

	tmp = NULL;
	tmp = lls;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	staray(t_node *stacka, int *s)
{
	int		i;
	int		x;
	t_node	*tmp;

	i = 0;
	tmp = stacka;
	x = sizell(tmp);
	while (i < x && tmp)
	{
		s[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
}

void	sortarray(t_node *stacka, int *s)
{
	int	j;
	int	x;
	int	key;
	int	i;

	staray(stacka, s);
	x = sizell(stacka);
	j = 1;
	while (j < x)
	{
		key = s[j];
		i = j - 1;
		while (i >= 0 && s[i] > key)
		{
			s[i + 1] = s[i];
			i--;
		}
		s[i + 1] = key;
		j++;
	}
}
