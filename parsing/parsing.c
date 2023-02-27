/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:28 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 18:41:11 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_sort_dup(int *arg, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arg[i] == arg[j])
				error(1);
			if (arg[i] > arg[j])
				k++;
			j++;
		}
		i++;
	}
	if (!k)
		exit(0);
}

void	if_everything_good(t_stack **head, int *arg, int len)
{
	int			i;
	t_stack		**ptr;

	i = 0;
	ptr = head;
	*ptr = NULL;
	while (i < len)
	{
		if (!(*ptr))
			*ptr = (t_stack *)malloc(sizeof(t_stack));
		(*ptr)->val = arg[i];
		if (i < len - 1)
		{
			(*ptr)->next = (t_stack *)malloc(sizeof(t_stack));
			ptr = &(*ptr)->next;
		}
		else
			(*ptr)->next = NULL;
		i++;
	}
}

t_stack	*bring_head(char **args, int len)
{
	int		i;
	int		j;
	int		*arg;
	t_stack	*head;

	i = 0;
	j = 0;
	arg = (int *)malloc(sizeof(int) * len);
	while (args[i])
		arg[j++] = ft_atoi(args[i++]);
	check_if_sort_dup(arg, len);
	if_everything_good(&head, arg, len);
	if (!head)
		exit(1);
	return (free(arg), head);
}

t_stack	*return_head(char **av)
{
	int		i;
	char	*ptr;
	char	**args;
	t_stack	*head;

	ptr = ft_strdup("");
	i = 1;
	while (av[i])
	{
		ptr = ft_strjoin(ptr, av[i]);
		ptr = ft_strjoin(ptr, " ");
		i++;
	}
	i = 0;
	args = ft_split(ptr, ' ');
	while (args[i])
		i++;
	head = bring_head(args, i);
	return (free(ptr), free(args), head);
}
