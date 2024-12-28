/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:30:21 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:12:59 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack *head)
{
	t_stack	*stk;

	if (head)
	{
		stk = head;
		while (stk->next != NULL)
		{
			if (stk->value > stk->next->value)
				return (0);
			stk = stk->next;
		}
	}
	return (1);
}
