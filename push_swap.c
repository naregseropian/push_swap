/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:19:39 by seropian          #+#    #+#             */
/*   Updated: 2023/07/02 18:39:29 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list_node	*head_a;
	t_list_node	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (argc == 1)
		return (0);
	else if (argc == 2)
		parse_and_insert_q(&head_a, argv[1]);
	else
		parse_and_insert(&head_a, argv, argc);
	if (is_sorted(head_a))
		return (free_list(head_a), 0);
	set_index(&head_a);
	sort_numbers(&head_a, &head_b);
	free_list(head_a);
	free_list(head_b);
	return (0);
}
