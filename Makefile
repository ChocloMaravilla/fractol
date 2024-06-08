NAME = fractol
HEADER = src/fractol.h
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = src/fractol.c\
	   src/parsing.c
OBJS = $(SRCS:.c=.o)
LIB_LIBFT =  Libs/ft_libft/libft.a
LIB_PRINTF = Libs/ft_printf/printf.a	

src/%.o : src/%.c Makefile
	$(CC) $(FLAGS) -Imlx_linux -c $< -o $@

all: $(NAME)


$(NAME): libs $(OBJS)
	$(CC) $(FLAGS) -Lmlx_linux -Lmlx_Linux -L$(LIB_LIBFT) -L$(LIB_PRINTF) $(OBJS)\
	   	-Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

libs:
	make -C Libs/ft_libft
	make -C Libs/ft_printf

clean:
	rm -f $(OBJS)
	make -C Libs/ft_libft clean
	make -C Libs/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C Libs/ft_libft fclean
	make -C Libs/ft_printf fclean

re: fclean all


.PHONY: all clean fclean re libs
