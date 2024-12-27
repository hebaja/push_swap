#include "push_swap.h"

int	get_lowest_pos(t_stack *head, int count)
{
	int min_val;
    int min_pos;
    int current_pos;
    t_stack *current;
	int	size;
	
	min_val = 2147483647;
	min_pos = -1;
	current_pos = 0;
	current = head;
	size = stack_size(head);
    while (current && size-- > count)
    {
        if (current->value < min_val)
        {
            min_val = current->value;
            min_pos = current_pos;
        }
        current = current->next;
        current_pos++;
    }
	return (min_pos);
}

void	count_1(t_stack **head, int min_pos)
{
	if (min_pos == 0)
		ra(head);
	if (min_pos == 1)
	{
		sa(head);
		ra(head);
	}
	if (min_pos == 2)
		rra(head);
}

void	count_2(t_stack **head, int min_pos)
{
	if (min_pos == 0)
		ra(head);
	if (min_pos == 1)
	{
		sa(head);
		ra(head);
	}
	if (min_pos == 2)
	{		
		ra(head);
		sa(head);
		rra(head);
		sa(head);
		ra(head);
	}
}

void	count_3(t_stack **head, int min_pos)
{
	if (min_pos == 0)
		ra(head);
	if (min_pos == 1)
	{
		sa(head);
		ra(head);
	}
}

void	sort_four(t_stack **head)
{
	count_1(head, get_lowest_pos(*head, 0));
	count_2(head, get_lowest_pos(*head, 1));
	count_3(head, get_lowest_pos(*head, 2));
	ra(head);
}
