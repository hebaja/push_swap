#include "push_swap.h"

void	stack_del_head(t_stack **head)
{
	t_stack	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}
