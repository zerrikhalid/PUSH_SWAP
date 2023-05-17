/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:57:32 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 14:02:12 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	t_stack	*top_a;

	if (stack_a || (*stack_a))
	{
		top_a = *stack_a;
		*stack_a = top_a->next;
		top_a->next = *stack_b;
		*stack_b = top_a;
		if (key == 0)
			write(1, "pb\n", 3);
	}
}
