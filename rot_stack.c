#include "push_swap.h"

void	rot_stack(t_stack **head)
{
	t_stack	*stk_l;
	t_stack	*stk_n;
	
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	stk_l = stack_last(*head);
	stk_n = (*head)->next;
	(*head)->next = NULL;
	stk_l->next = *head;
	*head = stk_n;
}
