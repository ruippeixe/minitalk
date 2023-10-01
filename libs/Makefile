NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I incs

LIBFT_SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
							ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
							ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
							ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
							ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c \
							ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
							ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
							ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
							ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
							ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
							ft_substr.c ft_tolower.c ft_toupper.c \

PRINTF_SRCS = ft_print_addr.c	ft_print_hex.c ft_printf.c ft_format.c \
							ft_printf_utils.c \

LIBFT_OBJS = $(addprefix srcs/libft/, ${LIBFT_SRCS:.c=.o})
PRINTF_OBJS = $(addprefix srcs/ft_printf/, ${PRINTF_SRCS:.c=.o})
OBJS = ${LIBFT_OBJS} ${PRINTF_OBJS}

AR = ar -rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[32m[OK] Library compiled: $@.\033[0m"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.SILENT: ${OBJS}

.PHONY: all clean fclean re