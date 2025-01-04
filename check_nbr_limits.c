/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nbr_limits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:30:12 by hebatist          #+#    #+#             */
/*   Updated: 2025/01/03 23:23:14 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi_long(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	if (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\v'
			|| *str == '\r' || *str == '\n' || *str == '\f')
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - 48);
			str++;
		}
	}
	return (res * sign);
}

int	check_nbr_limits(char *str)
{
	long	nbr;

	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		nbr = ft_atoi_long(str);
		if (nbr < -2147483648 || nbr > 2147483647)
			return (0);
		while (*str && (*str != ' ' && *str != '\t'))
			str++;
	}
	return (1);
}
