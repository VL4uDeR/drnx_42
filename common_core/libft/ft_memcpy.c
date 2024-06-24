#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	
	if (dst == NULL && src == NULL)
		return (dst);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		*(pdst++) = *(psrc++);
	return (dst);
}

int	main(void)
{
	char *sld;
	char copia[20];

	sld = 'holaMundo!!!';
	copia = 'adeeeu!'
	ft_memcpy(copia, sld, ft_strlen(sld) + 1);
	printf("%s\n", copia);
	return (0);
}