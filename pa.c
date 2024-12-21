/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:16:51 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 20:17:10 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	pa(t_stack **stk_b, t_stack **stk_a)
{
	size_t	len;

	len = stack_size(*stk_b);
	if (len > 0)
	{
		stack_addfront(stk_a, stack_new((*stk_b)->value));
		stack_del_head(stk_b);
	}
	ft_printf("pa\n");
}
