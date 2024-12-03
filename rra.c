#include "push_swap.h"

void	rra(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		rrot_stack(head);
}
