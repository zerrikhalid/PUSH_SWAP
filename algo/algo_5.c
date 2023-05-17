/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:24:14 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 14:16:56 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_stack **stack_a, t_stack **stack_b, int ac)
{
	int	index;

	index = 0;
	while (index < 1)
	{
		if ((*stack_a)->val == 0 && index++ >= 0)
			pb_instruction(stack_a, stack_b, 0);
		else
			ra_instruction(stack_a, 0);
	}
	sort_three(stack_a, ac);
	pa_instruction(stack_a, stack_b, 0);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b, int ac)
{
	int	index;

	index = 0;
	if (ac <= 5)
	{
		sort_four(stack_a, stack_b, ac);
		return ;
	}
	while (index < 2)
	{
		if ((*stack_a)->val == 0 || (*stack_a)->val == 4)
		{
			pb_instruction(stack_a, stack_b, 0);
			index++;
		}
		else
			ra_instruction(stack_a, 0);
	}
	sort_three(stack_a, ac);
	if ((*stack_b)->val > (*stack_b)->next->val)
		sb_instruction(stack_b, 0);
	pa_instruction(stack_a, stack_b, 0);
	pa_instruction(stack_a, stack_b, 0);
	ra_instruction(stack_a, 0);
}
