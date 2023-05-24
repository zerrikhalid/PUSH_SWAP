/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:28 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/20 20:57:30 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_sort_dup(int *arg, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arg[i] == arg[j])
				error(1);
			j++;
		}
		i++;
	}
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
		*ptr = (t_stack *)malloc(sizeof(t_stack));
		(*ptr)->val = arg[i];
		(*ptr)->next = NULL;
		ptr = &(*ptr)->next;
		i++;
	}
}

t_stack	*bring_head(char **args, int len)
{
	int		i;
	int		j;
	int		*arg;
	int		*indexed;
	t_stack	*head;

	i = 0;
	j = 0;
	arg = (int *)malloc(sizeof(int) * len);
	while (args[i])
		arg[j++] = ft_atoi(args[i++]);
	check_if_sort_dup(arg, len);
	indexed = indexing(arg, len);
	if_everything_good(&head, indexed, len);
	if (!head)
		exit(1);
	return (free(arg), free(indexed), head);
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
	i = -1;
	while (args[++i])
		free(args[i]);
	return (free(ptr), free(args), head);
}
