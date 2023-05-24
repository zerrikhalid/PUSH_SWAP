/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:27:15 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/15 20:47:41 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	if ((stack_a || (*stack_a)) && (stack_b || (*stack_b)))
	{
		ra_instruction(stack_a, key);
		rb_instruction(stack_b, key);
		if (key == 1)
			write(1, "rr\n", 3);
	}
}
