/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attr_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:28:45 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/28 16:53:27 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
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
				break ;
			}
			i++;
		}
		current = current->next;
	}
	free(arr);
}

void	attr_index(t_stack *head)
{
	t_stack	*current;
	size_t	size;
	int		*arr;
	int		i;

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
