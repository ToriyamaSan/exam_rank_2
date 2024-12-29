#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

void	putnbr(int nbr)
{
	if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 1;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(nb);
			write(1, " = ", 3);
			putnbr(i * nb);
			i++;
			if (i <= 9)
			{
				write(1, "\n", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
