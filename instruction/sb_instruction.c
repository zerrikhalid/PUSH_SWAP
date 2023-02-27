/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:15:28 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:29:11 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb_instruction(t_stack **stack_b, int key)
{
	t_stack	**tmp;
	t_stack	*sb;

	tmp = stack_b;
	sb = (*tmp)->next;
	free((*tmp)->next);
	(*tmp)->next = sb->next;
	sb->next = (*tmp);
	*stack_b = sb;
	if (key == 0)
		write(1, "sb\n", 3);
}
