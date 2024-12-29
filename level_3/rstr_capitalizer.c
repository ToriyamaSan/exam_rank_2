#include <unistd.h>

char	*rstrcap(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
	}
	write(1, &str[i], 1);
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == '\0')
		{
			str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write(1,"\n", 1);
	}
	else
	{
		while (i < argc)
		{
			rstrcap(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
