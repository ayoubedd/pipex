# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 11:17:19 by aeddaoud          #+#    #+#              #
#    Updated: 2022/05/14 11:17:21 by aeddaoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
BUFFER_SIZE=10
RM=rm -rf
NLIBFT=ft_calloc.c ft_memset.c ft_split.c ft_strcmp.c ft_strdup.c ft_strjoin.c ft_strlcat.c  ft_strlen.c

# ------ Mandatory ------ #
TARGET=pipex
INC_DIR=-I mandatory/include -I libs/nlibft/include
CORE=child_pipes.c core.c close_parent_pipes.c
PARSING=init_bins.c	init_flags.c resolve_path.c
PIPES= init_pipes.c check_pipes.c mk_pipes.c
UTILS=free_utils.c print_usage.c allocate_mode.c wait_children.c ft_printerr.c
SRCS=	mandatory/src/main.c	\
		$(addprefix libs/nlibft/, $(NLIBFT)) \
		$(addprefix mandatory/src/core/, $(CORE)) \
		$(addprefix mandatory/src/parsing/, $(PARSING)) \
		$(addprefix mandatory/src/pipes/, $(PIPES)) \
		$(addprefix mandatory/src/utils/, $(UTILS))
OBJS=$(SRCS:%.c=%.o)

# -------- BONUS -------- #
TARGET_BONUS=pipex_bonus
INC_DIR_BONUS=-I bonus/include -I libs/nlibft/include -I libs/get_next_line/include
CORE_BONUS=core.c child_pipes.c close_parent_pipes.c
HEREDOC_BONUS=heredoc.c
PARSING_BONUS=init_bins.c init_flags.c resolve_path.c
GET_NEXT_LINE=get_next_line.c get_next_line_utils.c
PIPES_BONUS=check_pipes.c init_pipes.c mk_pipes.c
UTILS_BONUS=free_utils.c print_usage.c allocate_mode.c wait_children.c ft_printerr.c
SRCS_BONUS=	bonus/src/main.c	\
			$(addprefix libs/nlibft/, $(NLIBFT)) \
			$(addprefix bonus/src/core/, $(CORE_BONUS)) \
			$(addprefix bonus/src/heredoc/, $(HEREDOC_BONUS)) \
			$(addprefix bonus/src/parsing/, $(PARSING_BONUS)) \
			$(addprefix bonus/src/pipes/, $(PIPES_BONUS)) \
			$(addprefix libs/get_next_line/, $(GET_NEXT_LINE)) \
			$(addprefix bonus/src/utils/, $(UTILS_BONUS))
OBJS_BONUS=$(SRCS_BONUS:%.c=%.o)


all: $(TARGET)

bonus: $(TARGET_BONUS)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(INC_DIR) $(OBJS) -o $(TARGET) 

$(TARGET_BONUS): $(OBJS_BONUS)
	$(CC) $(FLAGS) $(INC_DIR_BONUS) $(OBJS_BONUS) -o $(TARGET_BONUS) 

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(TARGET) $(TARGET_BONUS)

re: fclean $(TARGET)

rebonus: fclean $(TARGET_BONUS)

mandatory/src/%.o:mandatory/src/%.c
	$(CC) $(FLAGS) $(INC_DIR) -c $< -o $@ 

bonus/src/%.o:bonus/src/%.c
	$(CC) $(FLAGS) $(INC_DIR_BONUS) -c $< -o $@ 

libs/get_next_line/%.o:libs/get_next_line/%.c
	$(CC) $(FLAGS) -I libs/get_next_line/include -D BUFFER_SIZE=$(BUFFER_SIZE) -c $< -o $@ 

libs/nlibft/%.o:libs/nlibft/%.c
	$(CC) $(FLAGS) -I libs/nlibft/include -c $< -o $@ 
