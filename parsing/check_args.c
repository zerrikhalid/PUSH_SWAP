/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 04:45:18 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 18:40:54 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_each_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		i++;
	if (!arg[i])
		error(1);
	while (arg[i])
	{	
		if (arg[i] >= '0' && arg[i] <= '9')
			i++;
		else if ((arg[i] == '+' || arg[i] == '-')
			&& (arg[i + 1] >= '0' && arg[i + 1] <= '9')
			&& (arg[i + 2] == '+' || arg[i + 2] == '-'))
			error(1);
		else if ((arg[i] == '+' || arg[i] == '-')
			&& (arg[i + 1] >= '0' && arg[i + 1] <= '9'))
			i++;
		else if (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
			i++;
		else
			error(1);
	}
}

void	check_arguments(char **av)
{
	int	i;

	i = 1;
	while (av[i])
		check_each_arg(av[i++]);
}
