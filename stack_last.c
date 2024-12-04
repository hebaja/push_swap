/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:41 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:19:45 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *head)
{
	t_stack	*current_head;

	current_head = head;
	while (current_head)
	{
		if (current_head->next == NULL)
			break ;
		current_head = current_head->next;
	}
	return (current_head);
}
