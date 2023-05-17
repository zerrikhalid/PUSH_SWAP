/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:07:06 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/17 14:24:10 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "../get_next_line/get_next_line.h"

typedef struct s_stack
{
	int				val;
	struct s_stack	*next;
}t_stack;

void	error(int key);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	**ft_split(char *s, char c);
int		ft_atoi(char *s);
void	check_arguments(char **av);
t_stack	*return_head(char **av);
void	sa_instruction(t_stack **stack_a, int key);
void	sb_instruction(t_stack **stack_b, int key);
int		lst_size(t_stack *head);
void	ss_instruction(t_stack **stack_a, t_stack **stack_b, int key);
void	pa_instruction(t_stack **stack_a, t_stack **stack_b, int key);
void	pb_instruction(t_stack **stack_a, t_stack **stack_b, int key);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ra_instruction(t_stack **stack_a, int key);
void	rb_instruction(t_stack **stack_b, int key);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	rra_instruction(t_stack **stack_, int key);
void	rrb_instruction(t_stack **stack_b, int key);
void	rrr_instruction(t_stack **stack_a, t_stack **stack_b, int key);
void	rr_instruction(t_stack **stack_a, t_stack **stack_b, int key);
void	*ft_calloc(size_t count, size_t size);
int		*indexing(int *s, int len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	algo1(t_stack **stack_a, t_stack **stack_b);
void	algo2(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b, int ac);
void	sort_three(t_stack **stack, int ac);

#endif