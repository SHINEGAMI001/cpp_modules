# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/25 21:06:04 by hlachhab          #+#    #+#              #
#    Updated: 2025/05/25 22:55:02 by hlachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++
CFLAGS = -Wall -Wextra -Werror
EFLAGS = -std=c++98

OBJS = $(megaphone.cpp:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) $(EFLAGS) -c $< -o $@

name : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(OBJS) $(NAME)

re : fclean all



