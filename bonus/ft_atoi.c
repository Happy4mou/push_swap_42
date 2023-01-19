/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:02:11 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 16:14:02 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_minmax(unsigned long rst, int s)
{
	if (rst > 2147483647 && s == 1)
		f_error();
	else if (rst > 2147483648 && s == -1)
		f_error();
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	rst;
	int				s;

	i = 0;
	s = 1;
	rst = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rst = rst * 10 + str[i] - 48;
		i++;
	}
	ft_check_minmax(rst, s);
	return (rst * s);
}
