CFILES = ft_display_file.c ft_lib.c file.c
HEADER = includes
OFILES = ${CFILES:.c=.o}
NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
CMD = cc



.c.o :
		${CMD} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME} : ${OFILES}
		  ${CMD} ${FLAGS} ${OFILES} -o ${NAME}

all : ${NAME}

clean :
		rm -f ${OFILES}

fclean :
		rm -f ${NAME} ${OFILES}

 .PHONY:  all clean fclean
