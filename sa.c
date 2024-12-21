/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:18:47 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 20:23:19 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	sa(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		top_swap(head);
	ft_printf("sa\n");
}
