/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:28:45 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:43:00 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb_instruction(t_stack **stack_b, int key)
{
	t_stack	*sb;
	t_stack	**tmp;

	tmp = stack_b;
	sb = ft_lstlast(*stack_b);
	while ((*tmp)->next->next)
	{
		tmp = &(*tmp)->next;
	}
	(*tmp)->next = NULL;
	ft_lstadd_front(stack_b, sb);
	if (key == 0)
		write(1, "rrb\n", 4);
}
