#include "push_swap.h"

void	first_step(t_stack **head, t_stack **b, int count)
{
	if (!((*head)->index >> count & 1))
		pb(head, b);
	else
		ra(head);
}

void	second_step(t_stack **head, t_stack **b, int count, int index_size)
{
	if (!((*b)->index >> (1 + count) & 1) && index_size)
		rb(b);
	else
		pa(b, head);
}

int	already_sorted(t_stack **head, t_stack **b)
{
	if (check_sort(*head) && reverse_check_sort(*b))
	{
		while (stack_size(*b))
			pa(b, head);
		return 1;
	}
	return (0);
}

void	radix_sort(t_stack **head, t_stack **b)
{
	int	i;
	int	len;
	int	count;
	int	index_size;

	count = 0;
	index_size = stack_size(*head);
	while (index_size-- && !check_sort(*head))
	{
		i = 0;
		len = (int)stack_size(*head);
		while (i++ < len)
		{
			if (already_sorted(head, b))
				return ;
			first_step(head, b, count);
		}
		i = 0;
		len = (int)stack_size(*b);
		while (i++ < len)
			second_step(head, b, count, index_size);
		count++;
	}
}
