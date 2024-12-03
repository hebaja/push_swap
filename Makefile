CC=cc
CC_FLAGS= -Wall -Wextra -Werror
NAME=push_swap.a
HEADER_FILE=push_swap.h
SRCS=push_swap.c top_swap.c stack_size.c stack_new.c stack_last.c stack_addback.c stack_addfront.c stack_del_head.c sa.c sb.c ss.c \
	pa.c pb.c ra.c rb.c rr.c rot_stack.c
OBJS=$(SRCS:.c=.o)
LIBFT_DIR=libft

all: $(NAME)
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	ar rcs $@ $^

.c.o:
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
