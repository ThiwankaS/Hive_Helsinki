NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CMD = cc

all:
	${CMD} -c ${FLAGS} ft_*.c
	ar -rcs ${NAME} *.o
clean:
	rm -rf *.o
fclean:
	rm -rf *.o ${NAME}
re: fclean all

.PHONY:  all clean fclean re
