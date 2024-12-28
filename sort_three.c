/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:34:19 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 16:34:27 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **head)
{
	int	a;
	int	b;
	int	c;

	a = (*head)->value;
	b = (*head)->next->value;
	c = (*head)->next->next->value;
	if (a < c && a > b)
		sa(head);
	else if (b > a && b > c && a > c)
		rra(head);
	else if (a > b && c > b)
		ra(head);
	else if (a > b && b > c)
	{
		sa(head);
		rra(head);
	}
	else if (b > c && c > a)
	{
		ra(head);
		sa(head);
		rra(head);
	}
}
