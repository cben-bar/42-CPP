# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 18:10:59 by cben-bar          #+#    #+#              #
#    Updated: 2023/02/08 20:12:57 by cben-bar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	No_you_need_form_28B_not_28C...

DIR_OBJS	=	./.OBJS/

INCLUDES	=	Bureaucrat.hpp				\
				AForm.hpp					\
				ShrubberyCreationForm.hpp	\
				RobotomyRequestForm.hpp		\
#				PresidentialPardonForm.hpp

SRC			=	main.cpp					\
				Bureaucrat.cpp				\
				AForm.cpp					\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\
#				PresidentialPardonForm.cpp


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