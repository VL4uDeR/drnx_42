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

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	@$(RM) $(NAME)
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean re
