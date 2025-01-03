#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size);

int main(void)
{
	int tab[] = {42, 23, 17, 8, 15};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);

	printf("Tableau avant tri : ");
	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	sort_int_tab(tab, size);

	printf("Tableau après tri : ");
	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return 0;
}
*/