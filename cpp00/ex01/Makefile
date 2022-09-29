# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 15:47:49 by cben-bar          #+#    #+#              #
#    Updated: 2022/09/29 16:29:02 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

  NAME		=	phonebook

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Phonebook.class.hpp	\
				Contact.class.hpp

SRC			=	phonebook.cpp	\
				contacts.cpp	\
				main.cpp

OBJS		=	$(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPPC) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :	%.cpp $(INCLUDES)
					@mkdir -p $(DIR_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(DIR_OBJS)

fclean :		
			$(RM) $(DIR_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re
