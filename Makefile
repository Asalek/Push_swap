
#			░█▀▀█ ░█─░█ ░█▀▀▀█ ░█─░█ ░█▀▀▀█ ░█──░█ ─█▀▀█ ░█▀▀█
#			░█▄▄█ ░█─░█ ─▀▀▀▄▄ ░█▀▀█ ─▀▀▀▄▄ ░█░█░█ ░█▄▄█ ░█▄▄█
#			░█─── ─▀▄▄▀ ░█▄▄▄█ ░█─░█ ░█▄▄▄█ ░█▄▀▄█ ░█─░█ ░█───

SRC = push_swap.c Lib/creat_stack.c Lib/push.c Lib/rev_rotate.c Lib/rotate.c Lib/swap.c Lib/check_if_sorted.c Lib/sort_3_less.c Lib/sort_5_less.c Lib/find_in_stack.c Lib/find_min_max.c Lib/sort_more.c Lib/sort_tabl.c Lib/check_node_index.c Lib/sort_stack_a.c Lib/sort_stack_b.c Lib/free.c

BONUSRC = checker.c tools.c get_next_line/get_next_line.c Lib/creat_stack.c Lib/push.c Lib/rev_rotate.c Lib/rotate.c Lib/swap.c Lib/check_if_sorted.c Lib/sort_3_less.c Lib/sort_5_less.c Lib/find_in_stack.c Lib/find_min_max.c Lib/sort_more.c Lib/sort_tabl.c Lib/check_node_index.c Lib/sort_stack_a.c Lib/sort_stack_b.c Lib/free.c

CHECKER = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUSRC:.c=.o)
LIB = push_swap.a
Libb = Lib

all : text $(NAME)

$(NAME) : $(OBJ)
	@cd libft && make
	@cd libft && make bonus
	@$(CC) $^ libft/libft.a -o $@
	@ar -r $(LIB) $(OBJ)

$(Libb)/%.o: $(Libb)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ) $(LIB) $(BONUS_OBJ)
	@cd libft && make clean

fclean : clean
	@rm -rf $(NAME) $(CHECKER)
	@cd libft && make fclean

re : fclean all

bonus : $(CHECKER)

$(CHECKER) : $(BONUS_OBJ)
	@cd libft && make
	@cd libft && make bonus
	$(CC) $(CFLAGS) $(BONUS_OBJ) libft/libft.a -o $(CHECKER)

text :
	@echo "\033[1;5;1;36m";
	@echo " ░█▀▀█ ░█─░█ ░█▀▀▀█ ░█─░█ ░█▀▀▀█ ░█──░█ ─█▀▀█ ░█▀▀█ "
	@echo " ░█▄▄█ ░█─░█ ─▀▀▀▄▄ ░█▀▀█ ─▀▀▀▄▄ ░█░█░█ ░█▄▄█ ░█▄▄█ "
	@echo " ░█─── ─▀▄▄▀ ░█▄▄▄█ ░█─░█ ░█▄▄▄█ ░█▄▀▄█ ░█─░█ ░█─── "
	@echo "\x1b[0m"