/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:28 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:19:30 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_del_head(t_stack **head)
{
	t_stack	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}
