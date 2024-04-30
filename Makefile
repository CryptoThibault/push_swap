# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 10:38:33 by tchalaou          #+#    #+#              #
#    Updated: 2024/02/09 17:12:21 by tchalaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECK = checker
LIB = libft
FLAGS = -Wall -Wextra -Werror
FILES_MAIN =	main.c \
		push_swap.c \
		push_swap_three.c \
		push_swap_chunks.c \
		push_swap_highers.c \
		chunk_size.c \
		chunk_init.c \
		find_lowers.c \
		find_closest.c \
		find_higher.c \
		find_higher_ignore.c \
		distance_top.c \
		rotate_top.c
FILES_BONUS =	checker.c \
		read_rules.c \
		process_rule.c
FILES_GLOBAL =	print_error.c \
		array_size.c \
		array_free.c \
		input_select.c \
		input_check.c \
		double_check.c \
		stack_check.c \
		stack_init.c \
		stack_delete.c \
		stack_swap.c \
		stack_push.c \
		stack_rotate.c
$(NAME): lib
	cc $(FLAGS) -o $@ $(FILES_MAIN) $(FILES_GLOBAL) $(LIB)/$(LIB).a
all: $(NAME) bonus

clean:
	rm -f *.out
fclean: clean
	rm -f $(NAME) $(CHECK)
re: fclean all

lib:
	make -C $(LIB)
bonus: lib
	cc $(FLAGS) -o $(CHECK) $(FILES_BONUS) $(FILES_GLOBAL) $(LIB)/$(LIB).a
