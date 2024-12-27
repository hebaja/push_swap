#include "libft/include/libft.h"
#include "push_swap.h"

int	get_bit_size(int nbr)
{
	int	i;
	int	count;

	i = 31;
	count = 0;
	while(i >= 0)
	{
		if (nbr >> i & 1)
			break ;
		count++;
		i--;	
	}
	return (32 - count);
}

int	get_biggest_nbr(t_stack **head)
{
	int	size;
	int	nbr;
	int	tmp;

	size = stack_size(*head);
	nbr = 0;
	tmp = 0;
	while (size > 0)
	{
		tmp = get_bit_size((*head)->value);
		if (tmp  > nbr)
		       nbr = tmp;	
		rot_stack(head);
		size--;	
	}
	return (nbr);
}

void	radix_sort(t_stack **head, t_stack **b)
{
	int	i;
	int	len;
	int	count;
	int	bit_size;

	int	op = 0;


	count = 0;
	bit_size = get_biggest_nbr(head);
	while (bit_size-- && !check_sort(*head))
	{
		i = 0;
		len = (int)stack_size(*head);
		while (i++ < len)
			if (!((*head)->value >> count & 1))
			{
				pb(head, b);
				op++;
			}
			else
			{
				ra(head);
				op++;
			}

		print_moves(*head, *b, count);


		i = 0;
		len = (int)stack_size(*b);
		while (i++ < len)
		{
			if (!((*b)->value >> (1 + count) & 1) && bit_size)
			{
				rb(b);
				op++;

			}
			else
			{
				pa(b, head);
				op++;	
			}
		}
		count++;
		stack_iter(*head, print_node);
		ft_printf("\n%d\n", op);
	}
}
