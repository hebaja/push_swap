/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:18:12 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 20:21:38 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	rra(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		rrot_stack(head);
	ft_printf("rra\n");
}
