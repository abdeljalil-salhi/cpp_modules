# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalhi <absalhi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 01:10:54 by absalhi           #+#    #+#              #
#    Updated: 2023/02/07 01:22:24 by absalhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

NONE		=	'\033[0m'
GREEN		=	'\033[32m'
GRAY		=	'\033[2;37m'
ITALIC		=	'\033[3m'

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

.cpp.o		:
				@echo $(ITALIC)$(GRAY) "     - Making $<..." $(NONE)
				@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				@echo $(ITALIC)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo $(GREEN)"- Compiled -"$(NONE)

clean		:
				@echo $(ITALIC)$(GRAY) "     - Removing object files..." $(NONE)
				@$(RM) $(OBJS)

fclean		:	clean
				@echo $(ITALIC)$(GRAY) "     - Removing $(NAME)..." $(NONE)
				@$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
