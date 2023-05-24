/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:00:14 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/20 20:47:01 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra_instruction(t_stack **stack_a, int key)
{
	t_stack	*sa;
	t_stack	**tmp;

	if (stack_a && (*stack_a) && lst_size(*stack_a) >= 2)
	{
		tmp = stack_a;
		sa = ft_lstlast(*stack_a);
		while ((*tmp)->next->next)
			tmp = &(*tmp)->next;
		(*tmp)->next = NULL;
		ft_lstadd_front(stack_a, sa);
		if (key == 0)
			write(1, "rra\n", 4);
	}
}
