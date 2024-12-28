#include "push_swap.h"
#include "libft/include/libft.h"

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
				*head = stack_new(ft_atoi(str), 0);
			else
				stack_addback(head, stack_new(ft_atoi(str), 0));
		}
		str++;
		while (ft_isdigit(*str))
			str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	return (1);
}
