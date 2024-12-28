/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:29:16 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 17:17:07 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

int	build_stack(t_stack **head, char *str)
{
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if ((*str != ' ' && *str != '\t'
				&& *str != '+' && *str != '-' && !ft_isdigit(*str))
			|| (*str == '+' && !ft_isdigit(*(str + 1)))
			|| (*str == '-' && !ft_isdigit(*(str + 1))))
			return (0);
		if (*str == '+' || *str == '-' || ft_isdigit(*str))
		{
			if (*head == NULL)
				*head = stack_new(ft_atoi(str), 0);
			else
				stack_addback(head, stack_new(ft_atoi(str), 0));
		}
		str++;
		while (ft_isdigit(*str))
			str++;
		while (*str == ' ' || *str == '\t')
			str++;
	}
	return (1);
}
