#include "push_swap.h"

void	stack_addfront(t_stack **head, t_stack *new)
{
	if (*head && new)
	{
		new->next = *head;
		*head = new;
		return ;
	}
	if (new)
		*head = new;
}
