/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swaping.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:16:05 by seropian          #+#    #+#             */
/*   Updated: 2023/07/02 18:59:34 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list_node **head)
{
	int	temp;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	temp = (*head)->data;
	(*head)->data = (*head)->next_node->data;
	(*head)->next_node->data = temp;
	write(1, "sa\n", 3);
}

void	sb(t_list_node **head)
{
	int	temp;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	temp = (*head)->data;
	(*head)->data = (*head)->next_node->data;
	(*head)->next_node->data = temp;
	write(1, "sb\n", 3);
}

void	ss(t_list_node **head_a, t_list_node **head_b)
{
	int	temp_a;
	int	temp_b;

	if (*head_a == NULL || (*head_a)->next_node == NULL || \
			*head_b == NULL || (*head_b)->next_node == NULL)
		return ;
	temp_a = (*head_a)->data;
	(*head_a)->data = (*head_a)->next_node->data;
	(*head_a)->next_node->data = temp_a;
	temp_b = (*head_b)->data;
	(*head_b)->data = (*head_b)->next_node->data;
	(*head_b)->next_node->data = temp_b;
	write(1, "ss\n", 3);
}
