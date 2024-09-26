CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES = includes
OFILES = ${CFILES:.c=.o}
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CMD = cc

all : ${NAME}

.c.o :
		${CMD} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME} : ${OFILES}
			ar rcs ${NAME} ${OFILES}

clean :
		rm -f ${OFILES}

fclean :
		rm -f ${NAME} ${OFILES}

re : fclean all

 .PHONY:  all clean fclean re
