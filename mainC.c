/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:48:23 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/20 22:13:05 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_b && (*stack_b))
	{
		while (*stack_b)
		{
			tmp = *stack_b;
			*stack_b = (*stack_b)->next;
			free(tmp);
		}
	}
	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
}

int	check_sort(t_stack **stack_a)
{
	int		k;
	t_stack	*n;

	k = 0;
	if (!(*stack_a) || !stack_a)
		return (1);
	while (*stack_a)
	{
		n = (*stack_a)->next;
		while (n)
		{
			if ((*stack_a)->val > n->val)
				k++;
			n = n->next;
		}
		*stack_a = (*stack_a)->next;
	}
	if (!k)
		return (0);
	return (1);
}

int	check_move(t_stack **stack_a, t_stack **stack_b, char *s)
{
	if (!ft_strncmp(s, "pa\n", 3))
		pa_instruction(stack_a, stack_b, 2);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb_instruction(stack_a, stack_b, 2);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra_instruction(stack_a, 2);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb_instruction(stack_b, 2);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr_instruction(stack_a, stack_b, 2);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra_instruction(stack_a, 2);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb_instruction(stack_b, 2);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr_instruction(stack_a, stack_b, 2);
	else if (!ft_strncmp(s, "sa\n", 3))
		sa_instruction(stack_a, 2);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb_instruction(stack_b, 2);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss_instruction(stack_a, stack_b, 2);
	else
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	if (ac == 1)
		exit(0);
	check_arguments(av);
	stack_a = return_head(av);
	stack_b = NULL;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (check_move(&stack_a, &stack_b, line))
			error(1);
		free(line);
	}
	if (check_sort(&stack_a) || stack_b)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_free(&stack_a, &stack_b);
}
