/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:25:38 by nseropia          #+#    #+#             */
/*   Updated: 2023/06/23 17:53:59 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	if (str == NULL && str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main()
{
	char str[] = "";
	printf("%lu", strlen(str));
}
 */