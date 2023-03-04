# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 19:16:06 by absalhi           #+#    #+#              #
#    Updated: 2023/03/03 22:15:53 by absalhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	braiiiiiiinnnzzzz

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

NONE		=	'\033[0m'
GREEN		=	'\033[32m'
GRAY		=	'\033[2;37m'
ITALIC		=	'\033[3m'

SRCS		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
