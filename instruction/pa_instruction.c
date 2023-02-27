/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:03:55 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:25:07 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	t_stack	**tmp_a;
	t_stack	**tmp_b;
	t_stack	*top_b;
	t_stack	*top_a;

	if (stack_b || (*stack_b))
	{
		tmp_a = stack_a;
		tmp_b = stack_b;
		top_a = *tmp_b;
		top_b = *tmp_b;
		free(*stack_b);
		*stack_b = top_b->next;
		top_b = NULL;
		top_a->next = *tmp_a;
		*stack_a = top_a;
		if (key == 0)
			write(1, "pa\n", 3);
	}
}
