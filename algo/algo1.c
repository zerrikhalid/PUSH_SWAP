/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:16:42 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 12:48:54 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init(t_stack **stack_a, int *pv1, int *pv2, long *last_pv1)
{
	*last_pv1 = *pv1;
	*pv2 = lst_size(*stack_a) / 6 + *pv1;
	*pv1 += lst_size(*stack_a) / 3;
}

void	algo1(t_stack **stack_a, t_stack **stack_b)
{
	int		pv1;
	int		pv2;
	long	last_pv1;

	last_pv1 = -1e12;
	pv1 = 0;
	pv2 = lst_size(*stack_a) / 6 + pv1;
	pv1 += lst_size(*stack_a) / 3;
	while (lst_size(*stack_a) > 3)
	{
		if (lst_size(*stack_b) > 1 && (*stack_b)->val < pv2 \
			&& (*stack_b)->val > last_pv1 && (*stack_a)->val > pv1)
			rr_instruction(stack_a, stack_b, 1);
		else if (lst_size(*stack_b) > 1 && (*stack_b)->val < pv2 \
			&& (*stack_b)->val > last_pv1)
			rb_instruction(stack_b, 0);
		if ((*stack_a)->val < pv1)
			pb_instruction(stack_a, stack_b, 0);
		else
			ra_instruction(stack_a, 0);
		if (lst_size(*stack_b) >= pv1)
			init(stack_a, &pv1, &pv2, &last_pv1);
	}
}
