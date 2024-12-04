/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:22:47 by hebatist          #+#    #+#             */
/*   Updated: 2024/12/04 00:42:05 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	int	*arr;

	i = 0;
	len = argc -1;
	arr = (int *)malloc(sizeof(int) * len);
	while(++i < argc)
	{
		ft_printf("%d %s\n", argc, argv[i]);
		arr[i - 1] = ft_atoi(argv[i]);
	}
	i = -1;
	while (++i < len)
		ft_printf("%d\n", arr[i]);
	free(arr);
	return (0);
}
