/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:34:53 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 16:34:55 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear(t_stack *stk)
{
	if (stk->next)
		clear(stk->next);
	free(stk);
}

void	stack_clear(t_stack **head)
{
	if (*head)
	{
		clear(*head);
		*head = NULL;
	}
}
