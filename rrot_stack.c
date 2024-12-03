#include "push_swap.h"

void	rrot_stack(t_stack **head)
{
	t_stack	*stk_curr;
	t_stack *stk_prev;	
	
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	stk_curr = *head;
	stk_prev = NULL;
	while (stk_curr->next)
	{
		stk_prev = stk_curr;
		stk_curr = stk_curr->next;
	}
	stk_curr->next = *head;
	stk_prev->next = NULL;
	*head = stk_curr;
}
