/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:04:16 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 16:17:13 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	f_error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

void	ft_operation(char *tmp, t_node **stacka, t_node **stackb)
{
	if (ft_strncmp(tmp, "sa\n") == 0)
		swapa(*stacka);
	else if (ft_strncmp(tmp, "ra\n") == 0)
		rotatea(stacka);
	else if (ft_strncmp(tmp, "rra\n") == 0)
		rev_rotatea(stacka);
	else if (ft_strncmp(tmp, "pa\n") == 0)
		pusha(stackb, stacka);
	else if (ft_strncmp(tmp, "sb\n") == 0)
		swapb(*stackb);
	else if (ft_strncmp(tmp, "rb\n") == 0)
		rotateb(stackb);
	else if (ft_strncmp(tmp, "rrb\n") == 0)
		rev_rotateb(stackb);
	else if (ft_strncmp(tmp, "pb\n") == 0)
		pushb(stacka, stackb);
	else if (ft_strncmp(tmp, "ss\n") == 0)
		ss(stacka, stackb);
	else if (ft_strncmp(tmp, "rr\n") == 0)
		rr(stacka, stackb);
	else if (ft_strncmp(tmp, "rrr\n") == 0)
		rrr(stacka, stackb);
	else
		f_error();
}

int	main(int argc, char **argv)
{
	t_node	*stacka;
	t_node	*stackb;
	char	*tmp;

	stacka = NULL;
	stackb = NULL;
	if (argc == 1)
		exit(1);
	if (argc != 1)
	{
		stacka = stack_a(argc, argv);
		while (get_next_line(0, &tmp) != NULL)
		{
			ft_operation(tmp, &stacka, &stackb);
			free(tmp);
		}
		if (checksort(stacka) && stackb == NULL)
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
	}
	f_freestacka(&stacka);
	return (0);
}
