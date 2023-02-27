/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:07:06 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 21:45:21 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

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
void	ss_instruction(t_stack **stack_a, t_stack **stack_b);
void	pa_instruction(t_stack **stack_a, t_stack **stack_b, int key);
void	pb_instruction(t_stack **stack_a, t_stack **stack_b, int key);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ra_instruction(t_stack **stack_a, int key);
void	rb_instruction(t_stack **stack_b, int key);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	rra_instruction(t_stack **stack_, int key);
void	rrb_instruction(t_stack **stack_b, int key);
void	rrr_instruction(t_stack **stack_a, t_stack **stack_b);
void	rr_instruction(t_stack **stack_a, t_stack **stack_b, int key);

#endif