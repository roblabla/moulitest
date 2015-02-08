NAME = libmt_framework.a
INCLUDES = -I includes
SRCS = srcs/**/*.c
FLAGS = -Wall -Werror -Wextra -ggdb

all:
	gcc $(FLAGS) $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
