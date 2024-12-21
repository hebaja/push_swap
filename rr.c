/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:18:04 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 22:38:28 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	rr(t_stack **stk_a, t_stack **stk_b)
{
	size_t	len;

	len = stack_size(*stk_a);
	if (len > 1)
		rot_stack(stk_a);
	len = stack_size(*stk_b);
	if (len > 1)
		rot_stack(stk_b);
	ft_printf("rr\n");
}
