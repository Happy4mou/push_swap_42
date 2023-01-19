/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:34:56 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 15:57:57 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stacka;
	t_node	*stackb;
	int		size;

	stacka = NULL;
	stackb = NULL;
	if (argc == 1)
		exit(1);
	if (argc != 1)
	{
		stacka = stack_a(argc, argv);
		if (checksort(stacka) == 1)
			exit(0);
		size = sizell(stacka);
		if (size <= 3)
			sort_3(&stacka);
		if (size > 3 && size <= 16)
			sort_5(&stacka, &stackb);
		if (size > 16 && size <= 150)
			sort_big(&stacka, &stackb, 8);
		if (size > 150)
			sort_big(&stacka, &stackb, 18);
	}
	f_freestacka(&stacka);
	return (0);
}
