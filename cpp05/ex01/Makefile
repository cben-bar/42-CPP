# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beni <beni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 18:10:59 by cben-bar          #+#    #+#              #
#    Updated: 2023/01/27 20:06:44 by beni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Form_up_maggots!

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Bureaucrat.hpp	\
				Form.hpp

SRC			=	main.cpp		\
				Bureaucrat.cpp	\
				Form.cpp


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