# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/29 22:39:51 by hlachhab          #+#    #+#              #
#    Updated: 2025/07/29 22:39:58 by hlachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all