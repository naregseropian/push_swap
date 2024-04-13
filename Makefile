NAME	:= push_swap
NAME_BONUS   := checker
CC		:= cc
CFLAGS	:= -Wextra -Wall -Werror

LIBFT	:= ./lib/libft/libft.a
PRINTF	:= ./lib/ft_printf/libftprintf.a

SRCS	:= build_list.c helper_functions.c instructions_pushing.c \
			instructions_rotating.c instructions_swaping.c push_swap.c \
			sorting.c sorting_small.c error_handling.c sorting_large.c \
			do_shortcuts.c instructions_rrrotating.c

OBJS	:= $(SRCS:.c=.o)

BONUS	:= ./bonus/build_list_bonus.c ./bonus/helper_functions_bonus.c ./bonus/do_shortcuts_bonus.c\
			./bonus/instructions_pushing_bonus.c ./bonus/instructions_rotating_bonus.c \
			./bonus/instructions_swaping_bonus.c ./bonus/sorting_bonus.c \
			./bonus/sorting_small_bonus.c ./bonus/error_handling_bonus.c ./bonus/checker_bonus.c \
			./bonus/sorting_large_bonus.c ./bonus/get_next_line_bonus.c ./bonus/get_next_line_utils_bonus.c \
			./bonus/instructions_rrrotating_bonus.c

BONUS_OBJS	:= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ./lib/libft 
	@make -C ./lib/ft_printf
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(BONUS) $(BONUS_OBJS)
	@make -C ./lib/libft
	@make -C ./lib/ft_printf
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFT) $(PRINTF) -o $(NAME_BONUS)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< && printf "Compiling: $(notdir $<)"

clean:
	@make clean -C ./lib/libft 
	@make clean -C ./lib/ft_printf
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@make fclean -C ./lib/libft 
	@make fclean -C ./lib/ft_printf
	@rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all, clean, fclean, re