/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:47 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/04 00:42:05 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	print_node(int value)
{
	ft_printf("%d\n", value);
}

int	input_not_valid(char *str)
{
	while(*str)
	{
		if (!ft_isdigit(*str) && *str != '+' && *str != '-')
			return (1);
		str++;
	}
	return (0);
}

int	build_stack(t_stack **head, char *str)
{
	int	nbr;
	
	nbr = ft_atoi(str);
	if (input_not_valid(str))
		return (0);
	if (*head == NULL)
	{
		*head = stack_new(nbr);
	}
	else
	{
		stack_addback(head, stack_new(nbr));
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	t_stack	*head;

	i = 0;
	len = argc -1;
	head = NULL;
	while(++i < argc)
	{
		if (!build_stack(&head, argv[i]))
		{
			stack_clear(&head);
			ft_printf("Error\n");
			return (0);
		}	
	}
	stack_iter(head, print_node);
	stack_clear(&head);
	return (0);
}
