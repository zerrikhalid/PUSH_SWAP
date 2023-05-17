/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:16:39 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 12:55:28 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	position(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;
	int	size;

	size = lst_size(stack_b) / 2;
	pos = stack_a->val - 1;
	while (size--)
	{
		if (pos == stack_b->val)
			return (1);
		stack_b = stack_b->next;
	}
	return (0);
}

void	algo_partition_bottom(t_stack **stack_a, t_stack **stack_b, int *b)
{
	while ((*stack_a)->val - 1 != (*stack_b)->val && lst_size(*stack_b))
	{
		if (!(*b) || (*stack_b)->val > ft_lstlast(*stack_a)->val)
		{
			pa_instruction(stack_a, stack_b, 0);
			ra_instruction(stack_a, 0);
			*b = 1;
		}
		else
			rrb_instruction(stack_b, 0);
	}
	pa_instruction(stack_a, stack_b, 0);
}

void	algo_partition_top(t_stack **stack_a, t_stack **stack_b, int *b)
{
	while ((*stack_a)->val - 1 != (*stack_b)->val)
	{
		if (!(*b) || (*stack_b)->val > ft_lstlast(*stack_a)->val)
		{
			pa_instruction(stack_a, stack_b, 0);
			ra_instruction(stack_a, 0);
			*b = 1;
		}
		else
			rb_instruction(stack_b, 0);
	}
	pa_instruction(stack_a, stack_b, 0);
}

void	algo2(t_stack **stack_a, t_stack **stack_b)
{
	int	b;
	int	last_a;

	last_a = ft_lstlast(*stack_a)->val;
	b = 0;
	while (lst_size(*stack_b))
	{
		if (!position(*stack_a, *stack_b))
			algo_partition_bottom(stack_a, stack_b, &b);
		else
			algo_partition_top(stack_a, stack_b, &b);
		while ((*stack_a)->val - 1 == ft_lstlast(*stack_a)->val)
			rra_instruction(stack_a, 0);
		if (ft_lstlast(*stack_a)->val == last_a)
			b = 0;
	}
}
