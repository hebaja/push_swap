#include "push_swap.h"

int	reverse_check_sort(t_stack *head)
{
	t_stack	*stk;

	if (head)
	{	
		stk = head;
		while (stk->next != NULL)
		{
			if (stk->value < stk->next->value)
				return (0);
			stk = stk->next;
		}
	}
	return (1);
}
