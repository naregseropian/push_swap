/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:01:58 by nseropia          #+#    #+#             */
/*   Updated: 2023/07/02 18:03:12 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	do_instructions(t_list_node **head_a, t_list_node **head_b, char *input, \
						int *flag)
{
	if (ft_strncmp(input, "pa\n", 3) == 0)
		return (pa(head_a, head_b), 0);
	else if (ft_strncmp(input, "pb\n", 3) == 0)
		return (pb(head_a, head_b), 0);
	else if (ft_strncmp(input, "sa\n", 3) == 0)
		return (sa(head_a), 0);
	else if (ft_strncmp(input, "sb\n", 3) == 0)
		return (sb(head_a), 0);
	else if (ft_strncmp(input, "ss\n", 3) == 0)
		return (ss(head_a, head_b), 0);
	else if (ft_strncmp(input, "ra\n", 3) == 0)
		return (ra(head_a), 0);
	else if (ft_strncmp(input, "rb\n", 3) == 0)
		return (rb(head_b), 0);
	else if (ft_strncmp(input, "rr\n", 3) == 0)
		return (rr(head_a, head_b), 0);
	else if (ft_strncmp(input, "rra\n", 4) == 0)
		return (rra(head_a), 0);
	else if (ft_strncmp(input, "rrb\n", 4) == 0)
		return (rrb(head_b), 0);
	else if (ft_strncmp(input, "rrr\n", 4) == 0)
		return (rrr(head_a, head_b), 0);
	else
		return (*flag = 1);
}

void	mini_gnl(t_list_node **head_a, t_list_node **head_b, char *input, \
						int *flag)
{
	while (input)
	{
		do_instructions(head_a, head_b, input, flag);
		free(input);
		input = get_next_line(STDIN_FILENO);
	}
	if (*flag)
	{
		write(2, "Error\n", 6);
		free_list(*head_a);
		free_list(*head_b);
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	t_list_node	*head_a;
	t_list_node	*head_b;
	char		*input;
	int			flag;

	flag = 0;
	head_a = NULL;
	head_b = NULL;
	if (argc == 1)
		return (0);
	else if (argc == 2)
		parse_and_insert_q(&head_a, argv[1]);
	else
		parse_and_insert(&head_a, argv, argc);
	input = get_next_line(STDIN_FILENO);
	mini_gnl(&head_a, &head_b, input, &flag);
	if (is_sorted(head_a) && head_b == NULL)
		return (write(1, "OK\n", 3), free_list(head_a), free_list(head_b), 0);
	else
		return (write(1, "KO\n", 3), free_list(head_a), free_list(head_b), 0);
	return (0);
}
