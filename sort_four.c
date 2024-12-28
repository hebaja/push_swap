/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:33:55 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:09:36 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lowest_pos(t_stack *stk_a, int count)
{
	t_stack	*current;
	int		min_val;
	int		min_pos;
	int		current_pos;
	int		size;

	min_val = 2147483647;
	min_pos = -1;
	current_pos = 0;
	current = stk_a;
	size = stack_size(stk_a);
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

void	count_1(t_stack **stk_a, int min_pos)
{
	if (min_pos == 0)
		ra(stk_a);
	if (min_pos == 1)
	{
		sa(stk_a);
		ra(stk_a);
	}
	if (min_pos == 2)
		rra(stk_a);
}

void	count_2(t_stack **stk_a, int min_pos)
{
	if (min_pos == 0)
		ra(stk_a);
	if (min_pos == 1)
	{
		sa(stk_a);
		ra(stk_a);
	}
	if (min_pos == 2)
	{
		ra(stk_a);
		sa(stk_a);
		rra(stk_a);
		sa(stk_a);
		ra(stk_a);
	}
}

void	count_3(t_stack **stk_a, int min_pos)
{
	if (min_pos == 0)
		ra(stk_a);
	if (min_pos == 1)
	{
		sa(stk_a);
		ra(stk_a);
	}
}

void	sort_four(t_stack **stk_a)
{
	count_1(stk_a, get_lowest_pos(*stk_a, 0));
	count_2(stk_a, get_lowest_pos(*stk_a, 1));
	count_3(stk_a, get_lowest_pos(*stk_a, 2));
	ra(stk_a);
}
