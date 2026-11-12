NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBDIR = libft
LIBFT = $(LIBDIR)/libft.a
SRCS = ps_main.c
SRCS = ps_main.c ps_algo1_simple.c ps_algo2_medium.c ps_algo3_complex.c ps_algo4_adaptive.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBDIR)

%.o: %.c ps_header.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: 
	rm -f $(NAME)

.PHONY: all	clean fclean re

