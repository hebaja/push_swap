#include "push_swap.h"

void	stack_addback(t_stack **head, t_stack *new)
{
	if (*head == NULL)
		*head = new;
	else
		stack_last(*head)->next = new;
}
