/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:44:46 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:33:22 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr_instruction(t_stack **stack_a, t_stack **stack_b)
{
	rra_instruction(stack_a, 1);
	rrb_instruction(stack_b, 1);
	write(1, "rrr\n", 4);
}
