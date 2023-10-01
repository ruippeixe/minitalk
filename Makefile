# Makefile Variables
NAME = minitalk
CC = cc
CFLAGS = -Wall -Wextra -Werror -I incs/ -I libs/incs
RM = rm -f

# Source Files
SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_SRC_BONUS = server_bonus.c
CLIENT_SRC_BONUS = client_bonus.c

# Object Files
SERVER_OBJ = $(addprefix srcs/, $(SERVER_SRC:.c=.o))
CLIENT_OBJ = $(addprefix srcs/, $(CLIENT_SRC:.c=.o))
SERVER_OBJ_BONUS = $(addprefix srcs/bonus/, $(SERVER_SRC_BONUS:.c=.o))
CLIENT_OBJ_BONUS = $(addprefix srcs/bonus/, $(CLIENT_SRC_BONUS:.c=.o))

# Executables
SERVER_NAME = server
CLIENT_NAME = client
SERVER_NAME_BONUS = server_bonus
CLIENT_NAME_BONUS = client_bonus

# Default Target
all: $(NAME)

$(NAME): $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME): $(SERVER_OBJ)
	@make --no-print-directory -C libs
	@$(CC) $(CFLAGS) $(SERVER_OBJ) -L libs/ -lft -o $(SERVER_NAME)
	@echo "\033[32m[OK] Make completed: $@ built.\033[0m"

$(CLIENT_NAME): $(CLIENT_OBJ)
	@make --no-print-directory -C libs
	@$(CC) $(CFLAGS) $(CLIENT_OBJ) -L libs/ -lft -o $(CLIENT_NAME)
	@echo "\033[32m[OK] Make completed: $@ built.\033[0m"

# Bonus Target
bonus: $(SERVER_NAME_BONUS) $(CLIENT_NAME_BONUS)

$(SERVER_NAME_BONUS): $(SERVER_OBJ_BONUS)
	@make --no-print-directory -C libs
	@$(CC) $(CFLAGS) $(SERVER_OBJ_BONUS) -L libs/ -lft -o $(SERVER_NAME_BONUS)
	@echo "\033[32m[OK] Make completed: $@ built.\033[0m"

$(CLIENT_NAME_BONUS): $(CLIENT_OBJ_BONUS)
	@make --no-print-directory -C libs
	@$(CC) $(CFLAGS) $(CLIENT_OBJ_BONUS) -L libs/ -lft -o $(CLIENT_NAME_BONUS)
	@echo "\033[32m[OK] Make completed: $@ built.\033[0m"

# Clean Targets
clean_libs:
	@make --no-print-directory -C libs clean

fclean_libs:
	@make --no-print-directory -C libs fclean

clean: clean_libs
	@$(RM) $(SERVER_OBJ) $(CLIENT_OBJ) $(SERVER_OBJ_BONUS) $(CLIENT_OBJ_BONUS)
	@echo "\033[32m[OK] Clean completed: Object files removed.\033[0m"

fclean: clean fclean_libs
	@$(RM) $(NAME) $(SERVER_NAME) $(CLIENT_NAME) $(SERVER_NAME_BONUS) $(CLIENT_NAME_BONUS)
	@echo "\033[32m[OK] Full clean completed: Executables and object files removed.\033[0m"

# Other Targets
re: fclean all

.SILENT: $(SERVER_OBJ) $(CLIENT_OBJ) $(SERVER_OBJ_BONUS) $(CLIENT_OBJ_BONUS)

.PHONY: all clean fclean re clean_libs fclean_libs