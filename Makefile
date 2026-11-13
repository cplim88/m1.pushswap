NAME = push_swap
CC = cc
CFLAGS = -g -Wall -Werror -Wextra
LIBDIR = libft
LIBFT = $(LIBDIR)/libft.a
SRCS = ps_main.c
SRCS = ps_main.c ps_algo1_simple.c ps_algo2_medium.c ps_algo3_complex.c ps_algo4_adaptive.c ps_fn_stacksetup.c \
		ps_fn_stk_ops.c
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
	$(MAKE) -C $(LIBDIR) clean

fclean: 
	rm -f $(NAME) $(OBJS)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean all

.PHONY: all	clean fclean re

