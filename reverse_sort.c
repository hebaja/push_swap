/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:32:25 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:03:02 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_sort(t_stack **head)
{
	if ((*head) && (*head)->next && (!((*head)->value > (*head)->next->value)))
		sa(head);
	if ((*head) && stack_last(*head)->next
		&& (!((*head)->value > stack_last(*head)->value)))
		rra(head);
	if (check_sort(*head))
		return (1);
	return (0);
}
