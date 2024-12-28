/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:29:55 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 16:58:23 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double_nbr(t_stack *head)
{
	t_stack	*n_stk;
	size_t	len;
	int		value;

	len = stack_size(head);
	while (len--)
	{
		value = head->value;
		n_stk = head->next;
		while (n_stk)
		{
			if (value == n_stk->value)
				return (0);
			n_stk = n_stk->next;
		}
		head = head->next;
	}
	return (1);
}
