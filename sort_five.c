/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:33:45 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:05:37 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lowest_index(t_stack *stk_a)
{
	t_stack		*current;
	int			index;
	int			count;
	int			value;

	index = 0;
	count = 0;
	value = stk_a->value;
	current = stk_a;
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

void	sort_five(t_stack **stk_a, t_stack **stk_b)
{
	int	index;

	index = get_lowest_index(*stk_a);
	if (index > 2)
	{
		while (index++ <= 4)
			rra(stk_a);
		index = 0;
	}
	while (index--)
		ra(stk_a);
	pb(stk_a, stk_b);
	index = get_lowest_index(*stk_a);
	while (index--)
		ra(stk_a);
	pb(stk_a, stk_b);
	sort_three(stk_a);
	while (stack_size(*stk_b))
		pa(stk_b, stk_a);
}
