# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beni <beni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 18:10:59 by cben-bar          #+#    #+#              #
#    Updated: 2022/12/12 16:21:59 by beni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Towards_a_more_useful_fixed_point_number_class

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Fixed.hpp

SRC			=	main.cpp	\
				Fixed.cpp


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