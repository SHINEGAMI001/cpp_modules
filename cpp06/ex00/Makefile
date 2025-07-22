# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 22:30:57 by hlachhab          #+#    #+#              #
#    Updated: 2025/07/20 22:41:41 by hlachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Converter

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp ScalarConverter.cpp

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