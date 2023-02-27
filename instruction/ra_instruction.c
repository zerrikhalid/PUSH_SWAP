/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:26:55 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:25:52 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra_instruction(t_stack **stack_a, int key)
{
	t_stack	*sa;

	sa = *stack_a;
	*stack_a = (*stack_a)->next;
	sa->next = NULL;
	ft_lstadd_back(stack_a, sa);
	if (key == 0)
		write(1, "ra\n", 3);
}
