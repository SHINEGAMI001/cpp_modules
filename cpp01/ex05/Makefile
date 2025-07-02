# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/29 19:10:20 by hlachhab          #+#    #+#              #
#    Updated: 2025/06/29 22:47:43 by hlachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Harl.cpp

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