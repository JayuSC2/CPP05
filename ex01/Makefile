# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juitz <juitz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 16:26:51 by juitz             #+#    #+#              #
#    Updated: 2025/01/08 13:40:52 by juitz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FUM

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp\
		Form.cpp\
		Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

all: $(NAME)
$(NAME): $(OBJS)
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Program ready!"

clean: 
	@$(RM) $(OBJS)
	@echo "Program cleaned successfully!"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re