CC = c++
CFLAGS = -Wall -Werror -Wextra
NAME = megaphone
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
