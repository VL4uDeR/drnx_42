#Nombre del Programa
NAME = rush-02

#Archivos Fuente
SRCS = *.c

#Archivos objeto generados durante la compilacion
OBJECTS = ${SRC:.c=.o}

#Flags de compilacion
FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJECTS}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	cc -o ${NAME} ${SRCS} -Ilibrary ${FLAGS}
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

clean:
	rm -f ${OBJECTS}
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean
