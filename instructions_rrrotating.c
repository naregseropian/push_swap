/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_rrrotating.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:39:58 by nseropia          #+#    #+#             */
/*   Updated: 2023/07/01 16:50:18 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list_node **head_a, t_list_node **head_b)
{
	t_list_node	*last_node_a;
	t_list_node	*last_node_b;
	t_list_node	*current_a;
	t_list_node	*current_b;

	if (*head_a == NULL || (*head_a)->next_node == NULL || \
		*head_b == NULL || (*head_b)->next_node == NULL)
		return ;
	last_node_a = *head_a;
	*head_a = (*head_a)->next_node;
	last_node_b = *head_b;
	*head_b = (*head_b)->next_node;
	current_a = *head_a;
	while (current_a->next_node != NULL)
		current_a = current_a->next_node;
	current_b = *head_b;
	while (current_b->next_node != NULL)
		current_b = current_b->next_node;
	current_a->next_node = last_node_a;
	last_node_a->next_node = NULL;
	current_b->next_node = last_node_b;
	last_node_b->next_node = NULL;
	ft_printf("rr\n");
}

void	rra_wo_print(t_list_node **head)
{
	t_list_node	*last_node;
	t_list_node	*prev_node;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	last_node = *head;
	prev_node = NULL;
	while (last_node->next_node != NULL)
	{
		prev_node = last_node;
		last_node = last_node->next_node;
	}
	last_node->next_node = *head;
	*head = last_node;
	if (prev_node != NULL)
		prev_node->next_node = NULL;
}

void	rrb_wo_print(t_list_node **head)
{
	t_list_node	*last_node;
	t_list_node	*prev_node;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	last_node = *head;
	prev_node = NULL;
	while (last_node->next_node != NULL)
	{
		prev_node = last_node;
		last_node = last_node->next_node;
	}
	last_node->next_node = *head;
	*head = last_node;
	if (prev_node != NULL)
		prev_node->next_node = NULL;
}

void	rrr(t_list_node **head_a, t_list_node **head_b)
{
	if (*head_a != NULL && (*head_a)->next_node != NULL)
		rra_wo_print(head_a);
	if (*head_b != NULL && (*head_b)->next_node != NULL)
		rrb_wo_print(head_b);
	ft_printf("rrr\n");
}
