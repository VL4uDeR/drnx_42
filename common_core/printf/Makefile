NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c ft_printf_hex.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere..."
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo	"\n"
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

#bonus: .bonus

#.bonus:	$(OBJS_BONUS)
#	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando _bonus, espere..."
#	@ar $(ARFLAGS) $(NAME) $(OBJS_BONUS)
#	@echo	"\n"
#	@touch .bonus
#	@echo	"(•̀ᴗ•́)و _bonus generados!"

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	@$(RM) $(NAME) .bonus
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean re
