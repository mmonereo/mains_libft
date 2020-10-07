#include "libft.h"

t_list *ft_lstnew(void *content);

void printlist(t_list* head)
{
	t_list *tmp = head;

	while (tmp != NULL)
	{
		printf("%d - ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}

int main (void)
{
	t_list * n1, *n2, *n3;
	
	int x = 30;
	int y = 31;
	int z = 32;
	

	n1 = ft_lstnew(&x);
	printlist(n1);
	n2 = ft_lstnew(&y);
	n1->next = n2;
	printlist(n1);
	n3 = ft_lstnew(&z);
	n2->next = n3;
	printlist(n1);

}