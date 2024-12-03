#include "push_swap.h"

void	rb(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		rot_stack(head);
}
