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
				*head = stack_new(ft_atoi(str));
			else
				stack_addback(head, stack_new(ft_atoi(str)));
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

int	get_bit_size(int nbr)
{
	int	i;
	int	count;

	i = 31;
	count = 0;
	while(i >= 0)
	{
		if (nbr >> i & 1)
			break ;
		count++;
		i--;	
	}
	return (32 - count);
}

int	get_biggest_nbr(t_stack **head)
{
	int	size;
	int	nbr;
	int	tmp;

	size = stack_size(*head);
	nbr = 0;
	tmp = 0;
	while (size > 0)
	{
		tmp = get_bit_size((*head)->value);
		if (tmp  > nbr)
		       nbr = tmp;	
		rot_stack(head);
		size--;	
	}
	return (nbr);
}

void	print_moves(t_stack *a, t_stack *b, int move)
{
	ft_printf("## MOVE %d ##\n", move);
	ft_printf("a ->\n");
	stack_iter(a, print_node);
	ft_printf("\n");
	ft_printf("b ->\n");
	stack_iter(b, print_node);
	ft_printf("\n");
}

void	sort_three(t_stack **head)
{
	int	a;
	int	b;
	int	c;

	a = (*head)->value;
	b = (*head)->next->value;
	c = (*head)->next->next->value;
	if (a < c && a > b)
		sa(head);
	else if (b > a && b > c && a > c)
		rra(head);
	else if (a > b && c > b)
		ra(head);
	else if (a > b && b > c)
	{
		sa(head);
		rra(head);
	}
	else if (b > c && c > a)
	{
		ra(head);
		sa(head);
		rra(head);
	}
}

void	reverse_sort_three(t_stack **head)
{
	int	a;
	int	b;
	int	c;
	
	if (reverse_check_sort(*head))
		return ;
	a = (*head)->value;
	b = (*head)->next->value;
	c = (*head)->next->next->value;
	if (!(a < c && a > b))
		sa(head);
	else if (!(b > a && b > c && a > c))
		rra(head);
	else if (!(a > b && c > b))
		ra(head);
	else if (!(a > b && b > c))
	{
		sa(head);
		rra(head);
	}
	else if (!(b > c && c > a))
	{
		ra(head);
		sa(head);
		rra(head);
	}
}

void	sort_four(t_stack **head, t_stack **b)
{
	size_t	size;

	size = stack_size(*head);
	if ((*head)->value > (*head)->next->value)
		sa(head);
	if ((*head)->value > stack_last(*head)->value)
		rra(head);
	if (check_sort(*head))
		return ;
	while (stack_size(*head) != 1)
	{
		if ((*head)->value < (*head)->next->value)
			pb(head, b);
		else
			ra(head);
	}
	reverse_sort_three(b);
	while (stack_size(*b))
		pa(b, head);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int	len;
	t_stack	*head;
	t_stack *b;
	int	bit_size;
	int	bit;
	int	size;

	i = 0;
	len = argc -1;
	head = NULL;
	b = NULL;
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
	//stack_iter(head, print_node);
	
	bit_size = get_biggest_nbr(&head);
	count = 0;
	size = stack_size(head);

	if (size == 2 && !check_sort(head))
		sa(&head);
	if (size == 3 && !check_sort(head))
		sort_three(&head);
	if (size == 4 && !check_sort(head))
		sort_four(&head, &b);
	else
	{
		while (bit_size--)
		{
			if (check_sort(head))
				break ;
	
			i = 0;
			len = (int)stack_size(head);
			while (i < len)
			{
				if (check_sort(head))
					break ;
				bit = head->value >> count & 1;
				if (!bit)
					pb(&head, &b);
				else
					ra(&head);
				i++;
			}
	
			//print_moves(head, b, count + 1);
			
			i = 0;
			len = (int)stack_size(b);
			while (i < len)
			{
				pa(&b, &head);
				i++;
			}
			count++;
	
		}
	}

	if (!check_sort(head))
		ft_printf("not sorted\n");

	stack_iter(head, print_node);
	// ft_printf("\n");
	// ft_printf("%d\n", check_sort(head));
	/*
	stack_iter(b, print_node);
	ft_printf("\n");
	*/


	stack_clear(&head);
	return (0);
}
