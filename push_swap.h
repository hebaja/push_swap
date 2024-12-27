/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:28:38 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/21 18:36:45 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}		t_stack;

//void	push_swap(int *stack);
void	top_swap(t_stack **head);
size_t	stack_size(t_stack *head);
t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *head);
void	stack_addback(t_stack **head, t_stack *new_stk);
void	stack_addfront(t_stack **head, t_stack *new_stk);
void	stack_del_head(t_stack **head);
void	stack_clear(t_stack **head);
void	stack_iter(t_stack *head, void (*f)(int));
void	sa(t_stack **head);
void	sb(t_stack **head);
void	ss(t_stack **stk_a, t_stack **stk_b);
void	pa(t_stack **stk_b, t_stack **stk_a);
void	pb(t_stack **stk_a, t_stack **stk_b);
void	ra(t_stack **head);
void	rb(t_stack **head);
void	rr(t_stack **stk_a, t_stack **stk_b);
void	rra(t_stack **head);
void	rrb(t_stack **head);
void	rot_stack(t_stack **head);
void	rrot_stack(t_stack **head);
void	rrr(t_stack **stk_a, t_stack **stk_b);
int	check_sort(t_stack *head);
int	reverse_check_sort(t_stack *head);
void	radix_sort(t_stack **head, t_stack **b);
int	build_stack(t_stack **head, char *str);
void	sort_three(t_stack **head);
void	sort_five(t_stack **head, t_stack **b);
void	reverse_sort_three(t_stack **head);
int	reverse_sort(t_stack **head);
void	sort_four(t_stack **head);
int	check_double_nbr(t_stack *head);
int	check_nbr_limits(char *str);
void	print_moves(t_stack *a, t_stack *b, int move);
void	print_node(int value);

#endif
