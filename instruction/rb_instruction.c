/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:37:25 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 19:31:37 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb_instruction(t_stack **stack_b, int key)
{
	t_stack	*sb;

	if (stack_b && (*stack_b))
	{
		sb = *stack_b;
		*stack_b = (*stack_b)->next;
		sb->next = NULL;
		ft_lstadd_back(stack_b, sb);
		if (key == 0)
			write(1, "rb\n", 3);
	}
}
