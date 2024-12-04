/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:15 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:19:18 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addback(t_stack **head, t_stack *new)
{
	if (*head == NULL)
		*head = new;
	else
		stack_last(*head)->next = new;
}
