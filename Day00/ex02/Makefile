NAME = bank

SRCS =		Account.cpp \
			tests.cpp
INCLUDES = Account.hpp

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) $(INCLUDES)

$(NAME): $(OBJ) $(INCLUDES)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ}

fclean: clean
			$(RM) -rf $(NAME)

re: fclean all