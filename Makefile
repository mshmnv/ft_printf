.PHONY: all clean fclean re norme

NAME = libftprintf.a

SRC = ft_printf.c specifiers.c convert.c write.c changing.c put.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o:%.c
	@gcc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	@make -C libft/
	@ar rcs $(NAME) $(OBJ) libft/*.o
	@echo "----------libftprintf created----------"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norme:
	@norminette $(SRC) libft/