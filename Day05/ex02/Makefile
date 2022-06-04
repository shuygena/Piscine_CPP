NAME = bureau02

SRCS =		Bureaucrat.cpp\
			Form.cpp\
			PresidentialPardonForm.cpp\
 			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			main.cpp
INCLUDES =	Bureaucrat.hpp\
			PresidentialPardonForm.hpp\
 			RobotomyRequestForm.hpp\
			ShrubberyCreationForm.hpp\
			Form.hpp


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
			${RM} ${OBJ} *_shrubbery

fclean: clean
			$(RM) -rf $(NAME)

re: fclean all