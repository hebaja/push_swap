/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:18:55 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 20:23:44 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	sb(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		top_swap(head);
	ft_printf("sb\n");
}
