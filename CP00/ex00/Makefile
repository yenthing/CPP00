# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynguyen <ynguyen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 16:46:14 by ynguyen           #+#    #+#              #
#    Updated: 2024/04/04 14:53:36 by ynguyen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
RM	=		rm -f
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SOURCES = megaphone.cpp 
CXX = c++
OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re