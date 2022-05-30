NAME = EbpicBattle

SRCS =		HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\
			main.cpp
INCLUDES =	HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp

OBJ = $(SRCS:.cpp=.o)

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