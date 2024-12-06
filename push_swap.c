/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:47 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/06 00:14:58 by hebatist         ###   ########.fr       */
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
	while (*str)
	{
		while (*str == ' ')
			str++;
		if ((*str != ' ' && *str != '+' && *str != '-' && !ft_isdigit(*str))
			|| (*str == '+' && !ft_isdigit(*(str + 1)))
			|| (*str == '-' && !ft_isdigit(*(str + 1))))
			return (0);
		if (*str == '+' || *str == '-' || ft_isdigit(*str))
		{
			if (*head == NULL)
				*head = stack_new(atoi(str));
			else
				stack_addback(head, stack_new(atoi(str)));
		}
		str++;
		while (ft_isdigit(*str))
			str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	return (1);
}

int	check_double_nbr(t_stack *head)
{
	size_t	len;
	int	value;
	t_stack	*n_stk;
	
	len = stack_size(head);
	while (len--)
	{
		value = head->value;
		n_stk = head->next;
		while (n_stk)
		{
			if (value == n_stk->value)
				return (0);
			n_stk = n_stk->next;
		}
		head = head->next;
	}
	return (1);
}

int	print_error()
{
	ft_printf("Error\n");
	return (0);
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
			return (print_error());
		}	
	}
	i = -1;
	if(!check_double_nbr(head))
		return (print_error());
	stack_iter(head, print_node);
	stack_clear(&head);
	return (0);
}
