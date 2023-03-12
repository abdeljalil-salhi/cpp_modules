# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 02:32:44 by absalhi           #+#    #+#              #
#    Updated: 2023/03/12 02:33:25 by absalhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mommy_when_i_grow_up_i_want_to_be_a_bureaucrat

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -Iincludes -std=c++98

NONE		=	'\033[0m'
GREEN		=	'\033[32m'
GRAY		=	'\033[2;37m'
ITALIC		=	'\033[3m'

_SRCS		=	Bureaucrat.cpp
SRCS		=	$(addprefix srcs/, $(_SRCS)) main.cpp
OBJS		=	$(SRCS:.cpp=.o)

.cpp.o		:
				@echo $(ITALIC)$(GRAY) "     - Making $<..." $(NONE)
				@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				@echo $(ITALIC)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo $(GREEN)"- Compiled -"$(NONE)

debug		:	CFLAGS += -D DEBUG
debug		:	re

clean		:
				@echo $(ITALIC)$(GRAY) "     - Removing object files..." $(NONE)
				@$(RM) $(OBJS)

fclean		:	clean
				@echo $(ITALIC)$(GRAY) "     - Removing $(NAME)..." $(NONE)
				@$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all debug clean fclean re
