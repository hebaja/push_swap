/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:44 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/20 20:19:27 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	rb(t_stack **head)
{
	size_t	len;

	len = stack_size(*head);
	if (len > 1)
		rot_stack(head);
	ft_printf("rb\n");
}
