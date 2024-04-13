/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_shortcuts_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:51:11 by nseropia          #+#    #+#             */
/*   Updated: 2023/06/30 16:51:13 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_sa_ra(t_list_node **head_a)
{
	sa(head_a);
	ra(head_a);
}

void	do_pa_sa(t_list_node **head_a, t_list_node **head_b)
{
	pa(head_a, head_b);
	sa(head_a);
}

void	do_ra_ra(t_list_node **head_a)
{
	ra(head_a);
	ra(head_a);
}
