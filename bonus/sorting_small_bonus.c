/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:41:43 by seropian          #+#    #+#             */
/*   Updated: 2023/06/30 16:48:53 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort_two_numbers(t_list_node **head)
{
	if (*head == NULL || (*head)->next_node == NULL)
		return ;
	if ((*head)->data > (*head)->next_node->data)
		sa(head);
}

void	sort_three_numbers(t_list_node **head)
{
	int	a;
	int	b;
	int	c;

	a = (*head)->data;
	b = (*head)->next_node->data;
	c = (*head)->next_node->next_node->data;
	if (*head == NULL || (*head)->next_node == NULL \
		|| (*head)->next_node->next_node == NULL)
		return ;
	if (a > b && b < c && a > c)
		ra(head);
	else if (a < b && b > c && a < c)
		do_sa_ra(head);
	else if (a < b && b > c && a > c)
		rra(head);
	else if (a > b && b < c)
		sa(head);
	else if (a > b && b > c) 
	{
		sa(head);
		rra(head);
	}
}

void	sort_four_numbers(t_list_node **head_a, t_list_node **head_b)
{
	if ((*head_b)->data < (*head_a)->data)
		pa(head_a, head_b);
	else if ((*head_b)->data < (*head_a)->next_node->data)
	{
		pa(head_a, head_b);
		sa(head_a);
	}
	else if ((*head_b)->data < (*head_a)->next_node->next_node->data)
	{
		rra(head_a);
		pa(head_a, head_b);
		ra(head_a);
		ra(head_a);
	}
	else
	{
		pa(head_a, head_b);
		ra(head_a);
	}
}

void	sort_five_numbers(t_list_node **head_a, t_list_node **head_b)
{
	pb(head_a, head_b);
	pb(head_a, head_b);
	if (!is_sorted(*head_a))
		sort_three_numbers(head_a);
	sort_four_numbers(head_a, head_b);
	if ((*head_b)->data < (*head_a)->data)
		pa(head_a, head_b);
	else if ((*head_b)->data < (*head_a)->next_node->data)
		do_pa_sa(head_a, head_b);
	else if ((*head_b)->data < (*head_a)->next_node->next_node->data)
	{
		do_ra_ra(head_a);
		pa(head_a, head_b);
		rra(head_a);
		rra(head_a);
	}
	else if ((*head_b)->data < (*head_a)->next_node->next_node->next_node->data)
	{
		rra(head_a);
		pa(head_a, head_b);
		do_ra_ra(head_a);
	}
	else
		do_pa_sa(head_a, head_b);
}
