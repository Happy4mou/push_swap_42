/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utile_B.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:30:10 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/11 13:40:02 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

t_node	*ft_lstlast(t_node *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}
