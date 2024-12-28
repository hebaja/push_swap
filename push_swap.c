/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:47 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/21 19:06:16 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"
#include <stdio.h>
#include <unistd.h>

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

int	print_error()
{
	ft_printf("Error\n");
	return (0);
}

int	case_stack_error(t_stack **head)
{
	stack_clear(head);
	return (print_error());
}

void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while(i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	put_index(t_stack *head, int *arr)
{
	size_t	i;
	size_t	size;
	t_stack	*current;

	i = 0;
	size = stack_size(head);
	current = head;
	sort_arr(arr, size);
	while (current)
	{
		i = 0;
		while (i < size)
		{
			if (current->value == arr[i])
			{
				current->index = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
	free(arr);
}

void	attr_index(t_stack *head)
{
	int	*arr;
	size_t	size;
	t_stack	*current;
	int	i;

	size = stack_size(head);
	arr = (int *)malloc(sizeof(int) * size);
	current = head;
	i = 0;
	while (current)
	{
		arr[i++] = current->value;
		current = current->next;
	}
	put_index(head, arr);
}

int	main(int argc, char **argv)
{
	int	i;
	t_stack	*head;
	t_stack *b;

	i = 0;
	head = NULL;
	b = NULL;
	while(++i < argc)
		if (!check_nbr_limits(argv[i]) || !build_stack(&head, argv[i]))
			return (case_stack_error(&head));
	attr_index(head);
	if(!check_double_nbr(head))
		return (print_error());
	if (stack_size(head) == 2 && !check_sort(head))
		sa(&head);
	else if (stack_size(head) == 3 && !check_sort(head))
		sort_three(&head);
	else if (stack_size(head) == 4 && !check_sort(head))
		sort_four(&head);
	else if (stack_size(head) == 5 && !check_sort(head))
		sort_five(&head, &b);
	else
		radix_sort(&head, &b);

	stack_iter(head, print_node);

	stack_clear(&head);
	return (0);
}
