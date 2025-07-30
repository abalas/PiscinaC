
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	dest[20] = "Hola, ";
	char	src[] = "mundo!";
	unsigned int	result;

	result = ft_strlcat(dest, src, 20);
	ft_putstr("Resultado: ");
	ft_putstr(dest);
	write(1, "\n", 1);
	write(1, "Longitud total: ", 17);
	if (result > 9)
		write(1, "10+\n", 4); 
	else
		write(1, "OK\n", 3);
	return (0);
}
