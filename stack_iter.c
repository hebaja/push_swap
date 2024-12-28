/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:35:11 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 16:35:13 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	iter(t_stack *stk, void (*f)(int))
{
	(*f)(stk->value);
	if (stk->next)
		iter(stk->next, f);
}

void	stack_iter(t_stack *head, void (*f)(int))
{
	if (head && f)
		iter(head, f);
}
