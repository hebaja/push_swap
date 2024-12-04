/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:51 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:21:25 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot_stack(t_stack **head)
{
	t_stack	*stk_l;
	t_stack	*stk_n;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	stk_l = stack_last(*head);
	stk_n = (*head)->next;
	(*head)->next = NULL;
	stk_l->next = *head;
	*head = stk_n;
}
