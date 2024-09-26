CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02
SRCS = main.c data.c digit.c print_number.c open_directory.c process_characters.c error_handlers.c solve.c work.c

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
