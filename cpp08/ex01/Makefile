# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 22:16:32 by hlachhab          #+#    #+#              #
#    Updated: 2025/08/02 00:41:48 by hlachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Span.cpp \

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