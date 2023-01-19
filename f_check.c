/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_check.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:20:41 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 11:40:47 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chek(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (i != 0 && s[i] == 0)
		f_error();
	while (s[i])
	{
		if (ft_isdigit(s[i]))
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_check2(int x, t_node *head)
{
	while (head != NULL)
	{
		if (x == head->data)
			return (0);
		head = head->next;
	}
	return (1);
}

int	checksort(t_node *llc)
{
	t_node	*tmp;

	tmp = NULL;
	tmp = llc;
	while (tmp->next != NULL)
	{
		if (tmp->data < tmp->next->data)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

int	checkifup(t_node *llu, int tofinde)
{
	t_node	*tmp;
	int		sizel;

	tmp = NULL;
	tmp = llu;
	sizel = sizell(tmp);
	while (sizel / 2 > 0)
	{
		if (tmp->data != tofinde)
			tmp = tmp->next;
		return (1);
	}
	return (0);
}
