/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_pushing_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:18:34 by seropian          #+#    #+#             */
/*   Updated: 2023/06/29 15:20:05 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_list_node **head_a, t_list_node **head_b)
{
	t_list_node	*new_node;

	if (*head_b == NULL)
		return ;
	new_node = *head_b;
	*head_b = (*head_b)->next_node;
	new_node->next_node = *head_a;
	*head_a = new_node;
}

void	pb(t_list_node **head_a, t_list_node **head_b)
{
	t_list_node	*new_node;

	if (*head_a == NULL)
		return ;
	new_node = *head_a;
	*head_a = (*head_a)->next_node;
	new_node->next_node = *head_b;
	*head_b = new_node;
}
