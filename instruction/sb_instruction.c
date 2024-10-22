/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:15:28 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 19:37:11 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb_instruction(t_stack **stack_b, int key)
{
	t_stack	*sb;

	if (lst_size(*stack_b) >= 2 && stack_b && (*stack_b))
	{
		sb = (*stack_b)->next;
		(*stack_b)->next = sb->next;
		sb->next = *stack_b;
		*stack_b = sb;
		if (key == 0)
			write(1, "sb\n", 3);
	}
}
