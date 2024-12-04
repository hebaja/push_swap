/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:29 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:22:30 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addfront(t_stack **head, t_stack *new)
{
	if (*head && new)
	{
		new->next = *head;
		*head = new;
		return ;
	}
	if (new)
		*head = new;
}
