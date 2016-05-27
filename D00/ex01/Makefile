NAME = phonebook

FLAGS = -Wall -Werror -Wextra

SRC = $(shell ls -1 | grep "\.cpp")

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): compile_p $(OBJ)
		@clang++ $(FLAGS) -o $(NAME) $(OBJ)
		@printf "\n"

compile_p:
		@echo "\n\033[34mCompiling Project Wait...\033[39m"

%.o: %.c
		@gcc $(FLAGS) -o $@ -c $<
		@printf "\033[33m. \033[39m"

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all%
