#include "push_swap.h"

int	reverse_sort(t_stack **head)
{
	if ((*head) && (*head)->next && (!((*head)->value > (*head)->next->value)))
		sa(head);
	if ((*head) && stack_last(*head)->next && (!((*head)->value > stack_last(*head)->value)))
		rra(head);
	if (check_sort(*head))
		return (1);
	return (0);
}
