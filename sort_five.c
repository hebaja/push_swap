#include "push_swap.h"

int	get_lowest_index(t_stack *head)
{
	int	index;
	int	count;
	int	value;
	t_stack	*current;
	
	index = 0;
	count = 0;
	value = head->value;
	current = head;
	while (current->next)
	{
		count++;
		if (current->next->value < value)
		{
			index = count;
			value = current->next->value;
		}
		current = current->next;
	}
	return (index);
}

void	sort_five(t_stack **head, t_stack **b)
{
	int	index;

	index = get_lowest_index(*head);
	if (index > 2)
	{	
		while (index++ <= 4)
			rra(head);
		index = 0;
	}
	while (index--)
		ra(head);
	pb(head, b);
	index = get_lowest_index(*head);
	while (index--)
		ra(head);
	pb(head, b);
	sort_three(head);
	while (stack_size(*b))
		pa(b, head);
}
