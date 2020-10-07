#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

void *ft_f(void* x)
{
	*(int*)x = *(int*)x * 2;
	return((int*)x);
}

void *ft_del(void* to_del)
{
	*(int*)to_del = 0;
	return NULL;
}

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

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	
	while (*lst != NULL)
	{
		(*del)((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}

int main (void)
{
	t_list *n1, *n2, *n3, *n4, *new;

	int x = 30;
	int y = 31;
	int z = 32;
	int w = 33;

	n1 = ft_lstnew(&x);
	n2 = ft_lstnew(&y);
	n1 ->next = n2;
	n3 = ft_lstnew(&z);
	n2 ->next = n3;
	n4 = ft_lstnew(&w);
	n3 ->next = n4;
	printlist(n1);
	new = ft_lstmap(n1,(void *)ft_f, (void *)ft_del);
	printlist(new);
}