#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] = '\0')
		{
			if (s1[i] == s2[i])
			{
				return ((char *)s1);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
