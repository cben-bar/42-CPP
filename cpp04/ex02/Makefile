# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beni <beni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 18:10:59 by cben-bar          #+#    #+#              #
#    Updated: 2023/01/20 15:25:11 by beni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Abstract_class

DIR_OBJS	=	./.OBJS/

INCLUDES	=	AAnimal.hpp		\
				Dog.hpp			\
				Cat.hpp			\
				WrongAnimal.hpp	\
				WrongCat.hpp	\
				Brain.hpp

SRC			=	main.cpp		\
				AAnimal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp	\
				Brain.cpp


OBJS		=	$(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPPC) $(OBJS) -o $(NAME)

$(DIR_OBJS)%.o :	%.cpp $(INCLUDES)
					@mkdir -p $(DIR_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(DIR_OBJS)

fclean :		
			$(RM) $(DIR_OBJS) $(NAME)

re :		fclean all

.PHONY:		all clean fclean re