#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char *c = 0;
	char *d = "hola";

    ft_printf("Hello, World!\n");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "42 School");
    ft_printf("Integer: %d\n", 42);
    ft_printf("Unsigned: %u\n", 42);
	printf(" %p\n %p\n", c, d);
	ft_printf(" %p\n %p\n", c, d);
	return (0);
}

