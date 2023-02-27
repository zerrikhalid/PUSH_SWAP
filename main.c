/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:56:35 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 20:22:21 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac == 1)
		exit(0);
	check_arguments(av);
	stack_a = return_head(av);
	stack_b = return_head(av);
	rrr_instruction(&stack_a, &stack_b);
	int i = 0;
	while (stack_a)
	{
		printf("%d ", stack_a->val);
		stack_a = stack_a->next;
	}
	printf("\n");
	i = 0;
	while (stack_b)
	{
		printf("%d ", stack_b->val);
		stack_b = stack_b->next;
	}
}
