#include "push_swap.h"
#include "libft/include/libft.h"

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
