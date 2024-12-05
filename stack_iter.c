#include "push_swap.h"

void	iter(t_stack *stk, void (*f)(int))
{
	(*f)(stk->value);
	if (stk->next)
		iter(stk->next, f);
}

void	stack_iter(t_stack *head, void (*f)(int))
{
	if (head && f)
		iter(head, f);
}
