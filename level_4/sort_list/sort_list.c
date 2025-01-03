#include <unistd.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*list_tmp;
	int		swap;

	list_tmp = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = list_tmp;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = list_tmp;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a > b);
}

int main()
{
	t_list *lst = malloc(sizeof(t_list));
	lst->data = 10;
	lst->next = malloc(sizeof(t_list));
	lst->next->data = 3;
	lst->next->next = malloc(sizeof(t_list));
	lst->next->next->data = 4;
	lst->next->next->next = malloc(sizeof(t_list));
	lst->next->next->next->data = 2;
	lst->next->next->next->next = NULL;

	printf("Liste avant tri :\n");
	for (t_list *tmp = lst; tmp; tmp = tmp->next)
		printf("%d ", tmp->data);
	printf("\n");

	lst = sort_list(lst, ascending);

	printf("Liste après tri :\n");
	for (t_list *tmp = lst; tmp; tmp = tmp->next)
		printf("%d ", tmp->data);
	printf("\n");

	t_list *tmp;
	while (lst) {
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	return 0;
}
*/