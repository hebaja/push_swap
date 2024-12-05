#include "push_swap.h"

void	clear(t_stack *stk)
{
	if (stk->next)
		clear(stk->next);
	free(stk);
}

void	stack_clear(t_stack **head)
{
	if (*head)
	{
		clear(*head);
		*head = NULL;
	}
}
