/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_large_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:58:17 by nseropia          #+#    #+#             */
/*   Updated: 2023/06/30 19:02:15 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	get_max_bits(t_list_node **head)
{
	t_list_node	*current;
	int			max;
	int			max_bits;

	current = *head;
	max = current->data;
	max_bits = 0;
	while (current != NULL)
	{
		if (current->data > max)
			max = current->data;
		current = current->next_node;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

// void radix_sort(list_node **head_a, list_node **head_b)
// {
//     int max_bits;
//     int size;
//     int i;
//     int j;
//
//     max_bits = get_max_bits(head_a);
//     size = get_list_length(*head_a);
//     i = 0;
//     while (i < max_bits)
//     {
//         j = 0;
//         while (j < size)
//         {
//             int num = (*head_a)->data;
//             if (((num >> i) & 1) == 0)
//                 pb(head_a, head_b);
//             else
//                 ra(head_a);
//             j++;
//         }
//         while (*head_b != NULL)
//             pa(head_a, head_b);
//         i++;
//     }
// }

void	radix_sort(t_list_node **head_a, t_list_node **head_b)
{
	int	max_bits;
	int	size;
	int	num;
	int	i;
	int	j;

	max_bits = get_max_bits(head_a);
	size = get_list_length(*head_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*head_a)->index;
			if (((num >> i) & 1) == 0)
				pb(head_a, head_b);
			else
				ra(head_a);
			j++;
		}
		while (*head_b != NULL)
			pa(head_a, head_b);
		i++;
	}
}
