# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:55:21 by cben-bar          #+#    #+#              #
#    Updated: 2022/12/07 17:12:47 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

  NAME		=	Moar_brainz

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Zombie.hpp	\

SRC			=	main.cpp			\
				Zombie.cpp			\
				zombieHorde.cpp

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