#include "libft.h"


int ft_lstsize(t_list *lst);

void ft_lstadd_front(t_list **alst, t_list *new);

t_list *ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
	{
		return (NULL);
	}
	new ->content = content;
	new->next = NULL;
	return(new);

}

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
	t_list *n1, *n2, *n3;
	
	int x = 30;
	int y = 31;
	int z = 32;

	n1 = ft_lstnew(&x);
	n2 = ft_lstnew(&y);
	n1 ->next = n2;
	n3 = ft_lstnew(&z);
	n2 ->next = n3;
	printlist(n1);
	printf("valor de size: %d\n", ft_lstsize(n1));
	
	
	



}