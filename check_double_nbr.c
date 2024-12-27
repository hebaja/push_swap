#include "push_swap.h"

int	check_double_nbr(t_stack *head)
{
	size_t	len;
	int	value;
	t_stack	*n_stk;
	
	len = stack_size(head);
	while (len--)
	{
		value = head->value;
		n_stk = head->next;
		while (n_stk)
		{
			if (value == n_stk->value)
				return (0);
			n_stk = n_stk->next;
		}
		head = head->next;
	}
	return (1);
}
