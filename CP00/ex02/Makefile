
NAME = account
RM	=		rm -f
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SOURCES = Account.cpp tests.cpp 
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