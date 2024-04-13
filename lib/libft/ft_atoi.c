/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:11:07 by nseropia          #+#    #+#             */
/*   Updated: 2023/06/28 13:06:27 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	if (result * sign > 2147483647 || result * sign < -2147483648)
		return (LONG_MAX);
	return (result * sign);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     const char *p = "";
//     printf("%i\n", ft_atoi(p));
//     return (0);
// }