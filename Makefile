CC=cc
CC_FLAGS= -Wall -Wextra -Werror
NAME=push_swap.a
HEADER_FILE=push_swap.h
SRCS=top_swap.c stack_size.c stack_new.c stack_last.c stack_addback.c stack_addfront.c stack_del_head.c stack_clear.c stack_iter.c \
	sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c rot_stack.c rrot_stack.c check_sort.c reverse_check_sort.c radix_sort.c \
	build_stack.c sort_three.c sort_five.c reverse_sort_three.c reverse_sort.c sort_four.c check_double_nbr.c check_nbr_limits.c \
	print_moves.c print_node.c attr_index.c
OBJS=$(SRCS:.c=.o)
LIBFT_DIR=libft

all: $(NAME)
	make -C $(LIBFT_DIR)
	cc $(CC_FLAGS) push_swap.c push_swap.a $(LIBFT_DIR)/libft.a -o push_swap

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
