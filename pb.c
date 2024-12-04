/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:01 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/03 20:17:03 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stk_a, t_stack **stk_b)
{
	size_t	len;

	len = stack_size(*stk_a);
	if (len > 0)
	{
		stack_addfront(stk_b, stack_new((*stk_a)->value));
		stack_del_head(stk_a);
	}
}
