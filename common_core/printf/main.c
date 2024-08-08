#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char *c = 0;
	char *d = "hola";

    ft_printf("42 es la respuesta!\n");
    ft_printf("Character: %c\n", 'F');
    ft_printf("String: %s\n", "42_Barcelona");
    ft_printf("Integer: %d\t%i\n", (21 * -2), (101 * 1000 + 10));
    ft_printf("Unsigned: %u\n", 42);
	printf(" %p\n %p\n", c, d);
	ft_printf(" %p\n %p\n", c, d);
	return (0);
}

