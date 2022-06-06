NAME =  deserialize

SRCS =		main.cpp

OBJ = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) 

$(NAME): $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ} *_shrubbery

fclean: clean
			$(RM) -rf $(NAME)

re: fclean all