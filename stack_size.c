#include "push_swap.h"

size_t	stack_size(t_stack *stk)
{
	t_stack	*current_stk;
	size_t		size;

	size = 0;
	if (stk == NULL)
		return (0);
	current_stk = stk;
	while (current_stk)
	{
		current_stk = current_stk->next;
		size++;
	}
	return (size);
}
