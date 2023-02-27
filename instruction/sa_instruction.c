/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:13:34 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:33:00 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_instruction(t_stack **stack_a, int key)
{
	t_stack	**tmp;
	t_stack	*sa;

	tmp = stack_a;
	sa = (*tmp)->next;
	free((*tmp)->next);
	(*tmp)->next = sa->next;
	sa->next = (*tmp);
	*stack_a = sa;
	if (key == 0)
		write(1, "sa\n", 3);
}
