/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:27:15 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:31:15 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr_instruction(t_stack **stack_a, t_stack **stack_b, int key)
{
	ra_instruction(stack_a, 1);
	rb_instruction(stack_b, 1);
	write(1, "rr\n", 3);
}
