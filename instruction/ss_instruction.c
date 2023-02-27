/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:23:25 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:29:35 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss_instruction(t_stack **stack_a, t_stack **stack_b)
{
	sa_instruction(stack_a, 1);
	sb_instruction(stack_b, 1);
	write(1, "ss\n", 3);
}
