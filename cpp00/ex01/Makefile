# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beni <beni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 15:47:49 by cben-bar          #+#    #+#              #
#    Updated: 2022/10/01 16:17:16 by beni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

  NAME		=	phonebook

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Phonebook.class.hpp	\
				Contact.class.hpp

SRC			=	main.cpp			\
				Contact.cpp			\
				Phonebook.cpp

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
