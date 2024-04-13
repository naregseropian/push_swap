/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swaping_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:16:05 by seropian          #+#    #+#             */
/*   Updated: 2023/06/29 15:20:00 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_list_node **head)
{
	int	temp;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	temp = (*head)->data;
	(*head)->data = (*head)->next_node->data;
	(*head)->next_node->data = temp;
}

void	sb(t_list_node **head)
{
	int	temp;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	temp = (*head)->data;
	(*head)->data = (*head)->next_node->data;
	(*head)->next_node->data = temp;
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
}
