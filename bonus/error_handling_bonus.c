/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:44:25 by nseropia          #+#    #+#             */
/*   Updated: 2023/07/02 14:03:49 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_handling_p_and_i_q(t_list_node **head, t_mini stash, int i)
{
	if (i == 1)
	{
		if (!ft_isdigit(stash.array[stash.i][stash.j]))
		{
			write(2, "Error\n", 6);
			ft_free_array(stash.array);
			free_list(*head);
			exit (EXIT_FAILURE);
		}
	}
	if (i == 2)
	{
		if (is_duplicate(*head, stash.data))
		{
			write(2, "Error\n", 6);
			ft_free_array(stash.array);
			free_list(*head);
			exit (EXIT_FAILURE);
		}
	}
	if (i == 3)
		error_handling_list_len_q(head, stash);
	if (i == 4)
		error_handling_max_min_q(head, stash);
}

void	error_handling_list_len_q(t_list_node **head, t_mini stash)
{
	if (get_list_length(*head) == 0)
	{
		ft_free_array(stash.array);
		free_list(*head);
		exit (EXIT_FAILURE);
	}
}

void	error_handling_max_min_q(t_list_node **head, t_mini stash)
{
	write(2, "Error\n", 6);
	ft_free_array(stash.array);
	free_list(*head);
	exit (EXIT_FAILURE);
}

/* ************************************************************************** */

void	error_handling_dig(t_list_node **head, char arg)
{
	if (!ft_isdigit(arg))
	{
		write(2, "Error\n", 6);
		free_list(*head);
		exit (EXIT_FAILURE);
	}
}

void	error_handling_dup(t_list_node **head, long data)
{
	if (is_duplicate(*head, data))
	{
		write(2, "Error\n", 6);
		free_list(*head);
		exit (EXIT_FAILURE);
	}
}
