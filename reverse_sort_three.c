#include "push_swap.h"

void	two_ops(t_stack **head)
{
	sa(head);
	rra(head);
}

void	three_ops(t_stack **head)
{
	ra(head);
	sa(head);
	rra(head);
}

void	reverse_sort_three(t_stack **head)
{
	int	a;
	int	b;
	int	c;
	
	if (reverse_check_sort(*head))
		return ;
	a = (*head)->value;
	b = (*head)->next->value;
	c = (*head)->next->next->value;
	if (a < b && b > c && a > c)
		sa(head);
	else if (b < a && b < c && a < c)
		rra(head);
	else if (a < b && c < b)
		ra(head);
	else if (a < b && b < c)
		two_ops(head);
	else if (b < c && c < a)
		three_ops(head);
}
