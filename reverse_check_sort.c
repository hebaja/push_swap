/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_check_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:32:17 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:01:51 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_check_sort(t_stack *head)
{
	t_stack	*stk;

	if (head)
	{
		stk = head;
		while (stk->next != NULL)
		{
			if (stk->value < stk->next->value)
				return (0);
			stk = stk->next;
		}
	}
	return (1);
}
