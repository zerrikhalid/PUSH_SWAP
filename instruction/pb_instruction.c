/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:57:32 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:25:40 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	t_stack	**tmp_a;
	t_stack	**tmp_b;
	t_stack	*top_b;
	t_stack	*top_a;

	if (stack_a || (*stack_a))
	{
		tmp_a = stack_a;
		tmp_b = stack_b;
		top_b = *tmp_a;
		top_a = *tmp_a;
		free(*stack_a);
		*stack_a = top_a->next;
		top_a = NULL;
		top_b->next = *tmp_b;
		*stack_b = top_b;
		if (key == 0)
			write(1, "pa\n", 3);
	}
}
