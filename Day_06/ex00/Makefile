# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvievill <rvievill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/14 13:30:40 by rvievill          #+#    #+#              #
#    Updated: 2018/01/14 13:31:31 by rvievill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= clang++
NAME = ft_retro
FLAGS= -Wall -Werror -Wextra
PATH= src/
OPATH= obj/
HPATH= inc/ libft/
INC= $(addprefix -I, $(HPATH))
CPPFILES =	Enemies.class.cpp \
			AGameObject.class.cpp \
			main.cpp \
			Ship.class.cpp \
			Win.class.cpp \
			Missile.class.cpp

OFILES= $(CPPFILES:.cpp=.o)

OBJ= $(addprefix $(OPATH), $(OFILES))

.PHONY: all clean fclean name re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -lncurses $(OBJ) -o $(NAME)

$(OPATH)%.o: $(PATH)%.cpp
	@mkdir -p $(OPATH)
	$(CC) $(FLAGS) $(INC) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
