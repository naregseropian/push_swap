/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_rotating_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:17:12 by seropian          #+#    #+#             */
/*   Updated: 2023/06/30 19:04:13 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_list_node **head)
{
	t_list_node	*last_node;
	t_list_node	*current;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	last_node = *head;
	*head = (*head)->next_node;
	current = *head;
	while (current->next_node != NULL)
		current = current->next_node;
	current->next_node = last_node;
	last_node->next_node = NULL;
}

void	rb(t_list_node **head)
{
	t_list_node	*last_node;
	t_list_node	*current;

	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	last_node = *head;
	*head = (*head)->next_node;
	current = *head;
	while (current->next_node != NULL)
		current = current->next_node;
	current->next_node = last_node;
	last_node->next_node = NULL;
}

void	rra(t_list_node **head)
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

void	rrb(t_list_node **head)
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
