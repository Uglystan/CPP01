# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 14:55:15 by lgirault          #+#    #+#              #
#    Updated: 2023/06/18 14:55:39 by lgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cerveau
CC = c++
FLAGS = -Wall -Wextra -Werror -g3
C98 = -std=c++98
RM = rm -rf

SRC =	main.cpp \

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) $(C98) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(C98) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all