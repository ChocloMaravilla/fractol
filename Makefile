NAME = fractol
HEADER = fractol.h
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = /src/fractol.c \
	   /src/parsing.c
OBJS = $(SRCS:.c = .o)

%.o : %.c Makefile $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(libs) $(NAME)

$(libs):	
	make -C /Libs/ft_libft
	make -C /Libs/ft_printf

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	make -C Libs/ft_libft clean
	make -C Libs/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C Libs/ft_libft clean
	make -C Libs/ft_printf clean

re: fclean all

a
.PHONY: all clean fclean re $(libs)
