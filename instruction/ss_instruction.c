/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:23:25 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/15 20:50:57 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	if ((stack_a || (*stack_a)) && (stack_b || (*stack_b)))
	{	
		sa_instruction(stack_a, 1);
		sb_instruction(stack_b, 1);
		if (key == 1)
			write(1, "ss\n", 3);
	}
}
