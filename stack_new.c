/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:56 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:19:59 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack			*stk;

	stk = (t_stack *)malloc(sizeof(t_stack));
	if (stk == NULL)
		return (NULL);
	stk->value = value;
	stk->next = (NULL);
	return (stk);
}
