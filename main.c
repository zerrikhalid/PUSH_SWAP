/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:56:35 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/24 23:12:52 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack **stack_a)
{
	t_stack	*tmp;

	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
}

int	sa(t_stack **stack)
{
	sa_instruction(stack, 0);
	return (1);
}

void	sort_three(t_stack **stack, int ac)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->val;
	second = (*stack)->next->val;
	ac = lst_size(*stack);
	if (ac == 2 && first > second && sa(stack))
		return ;
	third = (*stack)->next->next->val;
	if (first < second && first > third)
		rra_instruction(stack, 0);
	else if (first > second && first < third)
		sa_instruction(stack, 0);
	else if (first > second && first > third && second > third)
	{
		ra_instruction(stack, 0);
		sa_instruction(stack, 0);
	}
	else if (first < second && first < third && second > third)
	{
		rra_instruction(stack, 0);
		sa_instruction(stack, 0);
	}
	else if (first > second && first > third && second < third)
		ra_instruction(stack, 0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac == 1)
		exit(0);
	check_arguments(av);
	stack_a = return_head(av);
	stack_b = NULL;
	if (lst_size(stack_a) <= 3)
		sort_three(&stack_a, ac);
	else if (lst_size(stack_a) <= 5)
		sort_five(&stack_a, &stack_b, ac);
	else
	{
		algo1(&stack_a, &stack_b);
		sort_three(&stack_a, ac);
		algo2(&stack_a, &stack_b);
	}
	ft_free(&stack_a);
}
