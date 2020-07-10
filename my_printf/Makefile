.PHONY: all clean fclean re norme

NAME = libftprintf.a

SRC = ft_printf.c specifiers.c convert.c write.c changing.c put.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o:%.c
	@gcc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	@ar rcs $(NAME) $(OBJ) libft/*.o
	@echo ---------------------------------------
	@echo ----------libftprintf created----------
	@echo ---------------------------------------

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norme:
	@norminette ft_printf.c write.c specifiers.c convert.c changing.c put.c ft_printf.h