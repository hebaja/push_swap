#include "push_swap.h"

void	top_swap(t_stack **head)
{
	t_stack	*stk_n;
	
	if (head == NULL || *head == NULL || (*head)->next == NULL)
        return ;

	stk_n = (*head)->next;
	(*head)->next = stk_n->next;
	stk_n->next = *head;
	*head = stk_n;
}
