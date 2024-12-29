#include <unistd.h>
#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * (ft_abs(end - start) + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	if (end > start)
	{
		while (end >= start)
		{
			tab[i] = end;
			i++;
			end--;
		}
	}
	else if (end < start)
	{
		while (end <= start)
		{
			tab[i] = end;
			i++;
			end++;
		}
	}
	return (tab);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	int	arr_len;
	int	*arr;

	arr_len = ft_abs(atoi(argv[2]) - atoi(argv[1]));
	arr = ft_rrange(atoi(argv[1]), atoi(argv[2]));
	for (int i = 0; i <= arr_len; i += 1)
		printf("%d\n", arr[i]);
	free(arr);
	return (EXIT_SUCCESS);
}
*/