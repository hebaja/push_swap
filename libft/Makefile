CC=cc
CC_FLAGS= -Wall -Wextra -Werror
NAME=libft.a
INC_DIR=include
SRC_DIR=src
FT_PRINTF_DIR=src/ft_printf
HEADER_FILE=libft.h
HEADER_FILE_BONUS=libft_bonus.h
SRCS=$(SRC_DIR)/ft_isalpha.c $(SRC_DIR)/ft_isdigit.c $(SRC_DIR)/ft_isalnum.c $(SRC_DIR)/ft_isascii.c $(SRC_DIR)/ft_isprint.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_memset.c \
		$(SRC_DIR)/ft_bzero.c $(SRC_DIR)/ft_memcpy.c $(SRC_DIR)/ft_memmove.c $(SRC_DIR)/ft_strlcpy.c $(SRC_DIR)/ft_strlcat.c $(SRC_DIR)/ft_strncmp.c $(SRC_DIR)/ft_toupper.c \
		$(SRC_DIR)/ft_tolower.c $(SRC_DIR)/ft_strchr.c $(SRC_DIR)/ft_strrchr.c $(SRC_DIR)/ft_memchr.c $(SRC_DIR)/ft_memcmp.c $(SRC_DIR)/ft_strnstr.c $(SRC_DIR)/ft_atoi.c \
		$(SRC_DIR)/ft_strdup.c $(SRC_DIR)/ft_calloc.c $(SRC_DIR)/ft_substr.c $(SRC_DIR)/ft_strjoin.c $(SRC_DIR)/ft_strtrim.c $(SRC_DIR)/ft_split.c $(SRC_DIR)/ft_itoa.c \
		$(SRC_DIR)/ft_strmapi.c $(SRC_DIR)/ft_striteri.c $(SRC_DIR)/ft_putchar_fd.c $(SRC_DIR)/ft_putstr_fd.c $(SRC_DIR)/ft_putendl_fd.c $(SRC_DIR)/ft_putnbr_fd.c \
		$(SRC_DIR)/ft_lstnew.c $(SRC_DIR)/ft_lstadd_front.c $(SRC_DIR)/ft_lstsize.c $(SRC_DIR)/ft_lstlast.c $(SRC_DIR)/ft_lstadd_back.c $(SRC_DIR)/ft_lstdelone.c \
		$(SRC_DIR)/ft_lstiter.c $(SRC_DIR)/ft_lstclear.c $(SRC_DIR)/ft_lstmap.c
FT_PRINTF_SRCS=$(FT_PRINTF_DIR)/ft_printf.c $(FT_PRINTF_DIR)/ft_printf.h $(FT_PRINTF_DIR)/ft_putchar_len.c $(FT_PRINTF_DIR)/ft_putnbr_base_len.c \
		$(FT_PRINTF_DIR)/ft_putptr_base_len.c $(FT_PRINTF_DIR)/ft_putstr_len.c $(FT_PRINTF_DIR)/print_type.c
OBJS=$(SRCS:.c=.o)
FT_PRINTF_OBJS=$(FT_PRINTF_SRCS:.c=.o)

$(NAME): $(OBJS) $(FT_PRINTF_OBJS)
	ar rcs $@ $^

.c.o: $(HEADER_FILE)
	$(CC) $(CC_FLAGS) -c $< -I $(INC_DIR) -o $@

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
