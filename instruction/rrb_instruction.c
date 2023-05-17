/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:28:45 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/15 20:50:15 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb_instruction(t_stack **stack_b, int key)
{
	t_stack	*sb;
	t_stack	**tmp;

	if (stack_b || (*stack_b))
	{
		tmp = stack_b;
		sb = ft_lstlast(*stack_b);
		while ((*tmp)->next->next)
			tmp = &(*tmp)->next;
		(*tmp)->next = NULL;
		ft_lstadd_front(stack_b, sb);
		if (key == 0)
			write(1, "rrb\n", 4);
	}
}
