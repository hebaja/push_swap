/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:47 by hebatist          #+#    #+#             */
/*   Updated: 2025/01/06 15:10:47 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

int	input_not_valid(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && *str != '+' && *str != '-')
			return (1);
		str++;
	}
	return (0);
}

int	print_error(void)
{
	ft_putendl_fd("Error\n", 2);
	return (0);
}

int	case_stack_error(t_stack **stk_a)
{
	stack_clear(stk_a);
	return (print_error());
}

int	main(int argc, char **argv)
{
	t_stack	*stk_a;
	t_stack	*stk_b;
	int		i;

	i = 0;
	stk_a = NULL;
	stk_b = NULL;
	while (++i < argc)
		if (!check_nbr_limits(argv[i]) || !build_stack(&stk_a, argv[i]))
			return (case_stack_error(&stk_a));
	attr_index(stk_a);
	if (!check_double_nbr(stk_a))
		return (print_error());
	if (stack_size(stk_a) == 2 && !check_sort(stk_a))
		sa(&stk_a);
	else if (stack_size(stk_a) == 3 && !check_sort(stk_a))
		sort_three(&stk_a);
	else if (stack_size(stk_a) == 4 && !check_sort(stk_a))
		sort_four(&stk_a);
	else if (stack_size(stk_a) == 5 && !check_sort(stk_a))
		sort_five(&stk_a, &stk_b);
	else
		radix_sort(&stk_a, &stk_b);
	stack_clear(&stk_a);
	return (0);
}
