/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:03:55 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 14:05:16 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	t_stack	*top_b;

	if (stack_b && (*stack_b))
	{
		top_b = *stack_b;
		*stack_b = top_b->next;
		top_b->next = *stack_a;
		*stack_a = top_b;
		if (key == 0)
			write(1, "pa\n", 3);
	}
}
