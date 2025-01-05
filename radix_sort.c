/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:32:00 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:01:10 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_step(t_stack **stk_a, t_stack **stk_b, int count)
{
	if (((*stk_a)->index >> count & 1) == 0)
		pb(stk_a, stk_b);
	else
		ra(stk_a);
}

void	second_step(t_stack **stk_a, t_stack **stk_b, int count, int index_size)
{
	if (((*stk_b)->index >> (1 + count) & 1) == 0 && index_size)
		rb(stk_b);
	else
		pa(stk_b, stk_a);
}

int	already_sorted(t_stack **stk_a, t_stack **stk_b)
{
	if (check_sort(*stk_a) && reverse_check_sort(*stk_b))
	{
		while (stack_size(*stk_b))
			pa(stk_b, stk_a);
		return (1);
	}
	return (0);
}

void	radix_sort(t_stack **stk_a, t_stack **stk_b)
{
	int	i;
	int	len;
	int	count;
	int	index_size;

	count = 0;
	index_size = stack_size(*stk_a);
	while (index_size-- && !check_sort(*stk_a))
	{
		i = 0;
		len = (int)stack_size(*stk_a);
		while (i++ < len)
		{
			if (already_sorted(stk_a, stk_b))
				return ;
			first_step(stk_a, stk_b, count);
		}
		if (already_sorted(stk_a, stk_b))
			return ;
		i = 0;
		len = (int)stack_size(*stk_b);
		while (i++ < len)
			second_step(stk_a, stk_b, count, index_size);
		count++;
	}
}
