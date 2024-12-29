#include <unistd.h>

void	putnbr(int nbr)
{
	char	*base;

	base = "0123456789";
	if (nbr >= 10)
	{
		putnbr(nbr / 10);
	}
	write(1, &base[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
