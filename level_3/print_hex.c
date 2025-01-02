#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

void	print_hex(unsigned int nb)
{
	char	*base;
	
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		print_hex(nb / 16);
		write(1, &base[nb % 16], 1);
	}
	else
	{
		write(1, &base[nb % 16], 1);
	}
}

int	main(int argc, char **argv)
{
	unsigned int	nbr;

	if (argc == 2)
	{
		nbr = (unsigned int)ft_atoi(argv[1]);
		print_hex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
