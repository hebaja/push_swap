#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack			*stk;

	stk = (t_stack *)malloc(sizeof(t_stack));
	if (stk == NULL)
		return (NULL);
	stk->value = value;
	stk->next = (NULL);
	return (stk);
}
