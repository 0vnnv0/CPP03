# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 14:02:21 by anschmit          #+#    #+#              #
#    Updated: 2025/04/02 14:42:50 by anschmit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp

CXX = c++

OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean