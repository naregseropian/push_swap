/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:03:55 by nseropia          #+#    #+#             */
/*   Updated: 2023/06/30 19:31:14 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_list_node **head)
{
	t_list_node	*current;
	t_list_node	*compare;

	current = *head;
	while (current != NULL)
	{
		current->index = 0;
		compare = *head;
		while (compare != NULL)
		{
			if (current->data > compare->data)
				current->index++;
			compare = compare->next_node;
		}
		current = current->next_node;
	}
}

void	sort_numbers(t_list_node **head_a, t_list_node **head_b)
{
	int	length_a;

	length_a = get_list_length(*head_a);
	if (length_a == 2)
		sort_two_numbers(head_a);
	else if (length_a == 3)
		sort_three_numbers(head_a);
	else if (length_a == 5)
		sort_five_numbers(head_a, head_b);
	else
		radix_sort(head_a, head_b);
}
