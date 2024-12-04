CC=cc
CC_FLAGS= -Wall -Wextra -Werror
NAME=libft.a
INC_DIR=include
SRC_DIR=src
HEADER_FILE=libft.h
HEADER_FILE_BONUS=libft_bonus.h
SRCS=$(SRC_DIR)/ft_isalpha.c $(SRC_DIR)/ft_isdigit.c $(SRC_DIR)/ft_isalnum.c $(SRC_DIR)/ft_isascii.c $(SRC_DIR)/ft_isprint.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_memset.c \
		$(SRC_DIR)/ft_bzero.c $(SRC_DIR)/ft_memcpy.c $(SRC_DIR)/ft_memmove.c $(SRC_DIR)/ft_strlcpy.c $(SRC_DIR)/ft_strlcat.c $(SRC_DIR)/ft_strncmp.c $(SRC_DIR)/ft_toupper.c \
		$(SRC_DIR)/ft_tolower.c $(SRC_DIR)/ft_strchr.c $(SRC_DIR)/ft_strrchr.c $(SRC_DIR)/ft_memchr.c $(SRC_DIR)/ft_memcmp.c $(SRC_DIR)/ft_strnstr.c $(SRC_DIR)/ft_atoi.c \
		$(SRC_DIR)/ft_strdup.c $(SRC_DIR)/ft_calloc.c $(SRC_DIR)/ft_substr.c $(SRC_DIR)/ft_strjoin.c $(SRC_DIR)/ft_strtrim.c $(SRC_DIR)/ft_split.c $(SRC_DIR)/ft_itoa.c \
	       	$(SRC_DIR)/ft_strmapi.c $(SRC_DIR)/ft_striteri.c $(SRC_DIR)/ft_putchar_fd.c $(SRC_DIR)/ft_putstr_fd.c $(SRC_DIR)/ft_putendl_fd.c $(SRC_DIR)/ft_putnbr_fd.c 
BONUS_SRCS=$(SRC_DIR)/ft_lstnew_bonus.c $(SRC_DIR)/ft_lstadd_front_bonus.c $(SRC_DIR)/ft_lstsize_bonus.c $(SRC_DIR)/ft_lstlast_bonus.c $(SRC_DIR)/ft_lstadd_back_bonus.c \
		$(SRC_DIR)/ft_lstdelone_bonus.c $(SRC_DIR)/ft_lstiter_bonus.c $(SRC_DIR)/ft_lstclear_bonus.c $(SRC_DIR)/ft_lstmap_bonus.c
OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(BONUS_SRCS:.c=.o)
FT_PRINTF_DIR=ft_printf
FT_PRINTF_LIB=$(FT_PRINTF_DIR)/libftprintf.a

$(NAME): $(OBJS) $(FT_PRINTF_LIB)
	ar rcs $@ $^

.c.o: $(HEADER_FILE)
	$(CC) $(CC_FLAGS) -c $< -I $(INC_DIR) -o $@

$(FT_PRINTF_LIB):
	make -C $(FT_PRINTF_DIR)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $< $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
