#include "push_swap.h"

void	sa(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		top_swap(head);
}
