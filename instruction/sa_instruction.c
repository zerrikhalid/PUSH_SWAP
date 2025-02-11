/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:13:34 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 19:37:07 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_instruction(t_stack **stack_a, int key)
{
	t_stack	*sa;

	if (lst_size(*stack_a) >= 2 && stack_a && (*stack_a))
	{
		sa = (*stack_a)->next;
		(*stack_a)->next = sa->next;
		sa->next = *stack_a;
		*stack_a = sa;
		if (key == 0)
			write(1, "sa\n", 3);
	}
}
