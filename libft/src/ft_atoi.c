/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:43:31 by hebatist          #+#    #+#             */
/*   Updated: 2024/09/29 16:01:19 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	move_forward(const char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i])
	{
		if (str[*i] == 9 || str[*i] == 10 || str[*i] == 11 \
			|| str[*i] == 12 || str[*i] == 13 || str[*i] == 32)
			(*i)++;
		else if (str[*i] == '-' || str[*i] == '+')
		{
			if (str[*i] == '-')
				sign *= -1;
			if (!is_number(str[*i + 1]))
				return (0);
			(*i)++;
		}
		else if (is_number(str[*i]))
			return (sign);
		else
			return (0);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = move_forward(nptr, &i);
	if (sign == 0)
		return (0);
	while (nptr[i])
	{
		if (is_number(nptr[i]) && is_number(nptr[i + 1]))
		{
			result = result * 10 + (nptr[i] - 48);
			i++;
		}
		else if (is_number(nptr[i]) && !is_number(nptr[i + 1]))
		{
			result = result * 10 + (nptr[i] - 48);
			break ;
		}
		else
			i++;
	}
	return (result * sign);
}
