# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 03:10:30 by kzerri            #+#    #+#              #
#    Updated: 2023/05/17 14:20:48 by kzerri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
BONUS		=	checker
CC			=	cc
PUSHSWAP_H	=	push_swap.h
CFLAGS		=	-Werror -Wextra -Wall
RM			=	rm -rf
SRCS		=	parsing/parsing.c main.c parsing/check_args.c parsing/lib_help.c parsing/ft_split.c parsing/ft_error.c parsing/indexing.c\
				instruction/sa_instruction.c instruction/sb_instruction.c algo/algo1.c algo/algo2.c algo/algo_5.c parsing/calloc.c parsing/ft_strncmp.c\
				lst_size.c instruction/ss_instruction.c instruction/pa_instruction.c instruction/pb_instruction.c instruction/ra_instruction.c lst_add_back.c lst_last.c\
				instruction/rb_instruction.c lst_addfront.c instruction/rra_instruction.c instruction/rrb_instruction.c instruction/rrr_instruction.c instruction/rr_instruction.c\
				get_next_line/get_next_line_utils.c get_next_line/get_next_line.c
				
SRCS_BONUS	=	parsing/parsing.c mainC.c parsing/check_args.c parsing/lib_help.c parsing/ft_split.c parsing/ft_error.c parsing/indexing.c\
				instruction/sa_instruction.c instruction/sb_instruction.c algo/algo1.c algo/algo2.c parsing/calloc.c parsing/ft_strncmp.c\
				lst_size.c instruction/ss_instruction.c instruction/pa_instruction.c instruction/pb_instruction.c instruction/ra_instruction.c lst_add_back.c lst_last.c\
				instruction/rb_instruction.c lst_addfront.c instruction/rra_instruction.c instruction/rrb_instruction.c instruction/rrr_instruction.c instruction/rr_instruction.c\
				get_next_line/get_next_line_utils.c get_next_line/get_next_line.c

OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o) 

$(NAME)		: $(SRCS) $(PUSHSWAP_H)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(BONUS)	:	$(SRCS_BONUS) $(PUSHSWAP_H)
			$(CC) $(CFLAGS) $(SRCS_BONUS) -o $(BONUS)

all			:	$(NAME)

bonus		: $(BONUS)
	
clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean		: clean
			$(RM) $(NAME) $(BONUS)

re			: fclean all