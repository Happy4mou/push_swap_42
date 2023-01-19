/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_check_B.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:20:41 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 12:20:03 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

	tmp = llc;
	if (llc)
	{
		while (tmp->next != NULL)
		{
			if (tmp->data < tmp->next->data)
				tmp = tmp->next;
			else
				return (0);
		}
	}
	return (1);
}
