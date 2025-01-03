#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			end = i;
			while (i >= 0 && argv[1][i] != 32)
			{
				i--;
			}
			start = i + 1;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (i > 0)
			{
				write(1, " ", 1);
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
