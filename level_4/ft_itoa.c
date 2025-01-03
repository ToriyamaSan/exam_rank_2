#include <unistd.h>
#include <stdlib.h>

int	ft_len(long nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;
	long	n;

	n = nbr;
	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		len--;
		str[len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_itoa(int nbr);

int main(void)
{
	int numbers[] = {123, -456, 0, 789};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	char *result;

	for (int i = 0; i < size; i++)
	{
		result = ft_itoa(numbers[i]);
		if (result != NULL)
		{
			printf("Integer: %d, String: %s\n", numbers[i], result);
			free(result);
		}
		else
		{
			printf("Conversion failed for number: %d\n", numbers[i]);
		}
	}
	return 0;
}
*/