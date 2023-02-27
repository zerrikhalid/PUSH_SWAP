# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 03:10:30 by kzerri            #+#    #+#              #
#    Updated: 2023/02/27 19:09:10 by kzerri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
PUSHSWAP_H	=	push_swap.h
CFLAGS		=	-Werror -Wextra -Wall
RM			=	rm -rf
SRCS		=	parsing/parsing.c main.c parsing/check_args.c parsing/lib_help.c parsing/ft_split.c parsing/ft_error.c instruction/sa_instruction.c instruction/sb_instruction.c\
				lst_size.c instruction/ss_instruction.c instruction/pa_instruction.c instruction/pb_instruction.c instruction/ra_instruction.c lst_add_back.c lst_last.c\
				instruction/rb_instruction.c lst_addfront.c instruction/rra_instruction.c instruction/rrb_instruction.c instruction/rrr_instruction.c
				
OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o) 

$(NAME)		: $(SRCS) $(PUSHSWAP_H)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	
all			:	$(NAME)

clean		:
			$(RM) $(OBJS) $(OBJS_BONUS) $(NAME)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all