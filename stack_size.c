/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:20:04 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:26:08 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_size(t_stack *stk)
{
	size_t		size;
	t_stack		*current_stk;

	size = 0;
	if (stk == NULL)
		return (0);
	current_stk = stk;
	while (current_stk)
	{
		current_stk = current_stk->next;
		size++;
	}
	return (size);
}
