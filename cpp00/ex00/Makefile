# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:44:22 by cben-bar          #+#    #+#              #
#    Updated: 2022/10/06 11:44:32 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

DIR_OBJS	=	./.OBJS/

SRC			= 	megaphone.cpp

OBJS		=	$(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPPC) $(OBJS) -o $(NAME)

$(DIR_OBJS)%.o :	%.cpp
					@mkdir -p $(DIR_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(DIR_OBJS)

fclean :		
			$(RM) $(DIR_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re
