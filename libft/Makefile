CC=cc
CC_FLAGS= -Wall -Wextra -Werror
LIB=libft.a
##HEADER_FILE=libft.h
##HEADER_FILE_BONUS=libft_bonus.h
SRCS=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c \
		ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
BONUS_SRCS=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c	ft_lstclear_bonus.c ft_lstmap_bonus.c
OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(BONUS_SRCS:_bonus.c=_bonus.o)

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $@ $^

bonus: $(BONUS_OBJS)
	ar rcs $(LIB) $(BONUS_OBJS)

.c.o:
	$(CC) $(CC_FLAGS) -c $< -o $@

_bonus.c._bonus.o:
	(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
