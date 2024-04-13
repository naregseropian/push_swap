/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:53:11 by seropian          #+#    #+#             */
/*   Updated: 2023/07/02 18:48:24 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_node(t_list_node **head, int data)
{
	t_list_node	*new_node;
	t_list_node	*current;

	new_node = malloc(sizeof(t_list_node));
	current = *head;
	if (new_node == NULL)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	new_node->data = data;
	new_node->next_node = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	while (current->next_node != NULL)
		current = current->next_node;
	current->next_node = new_node;
	return ;
}

int	is_duplicate(t_list_node *head, int data)
{
	t_list_node	*current;

	current = head;
	while (current != NULL)
	{
		if (current->data == data)
			return (1);
		current = current->next_node;
	}
	return (0);
}

int	is_sorted(t_list_node *head)
{
	t_list_node	*current;

	if (head == NULL || head->next_node == NULL)
		return (1);
	current = head;
	while (current->next_node != NULL)
	{
		if (current->data > current->next_node->data)
			return (0);
		current = current->next_node;
	}
	return (1);
}

void	parse_and_insert_q(t_list_node **head, char *input)
{
	t_mini	stash;

	stash.array = ft_split(input, ' ');
	stash.i = 0;
	while (stash.array[stash.i] != NULL)
	{
		stash.j = 0;
		if (stash.array[stash.i][0] == '-' || stash.array[stash.i][0] == '+')
			stash.j = 1;
		while (stash.j < ft_strlen(stash.array[stash.i]))
		{
			error_handling_p_and_i_q(head, stash, 1);
			stash.j++;
		}
		stash.data = ft_atoi(stash.array[stash.i]);
		if (stash.data == LONG_MAX)
			error_handling_p_and_i_q(head, stash, 4);
		error_handling_p_and_i_q(head, stash, 2);
		insert_node(head, stash.data);
		stash.i++;
	}
	error_handling_p_and_i_q(head, stash, 3);
	ft_free_array(stash.array);
}

void	parse_and_insert(t_list_node **head, char **argv, int argc)
{
	long	data;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j = 1;
		while (j < ft_strlen(argv[i]))
			error_handling_dig(head, argv[i][j++]);
		data = ft_atoi(argv[i]);
		if (data == LONG_MAX)
		{
			write(2, "Error\n", 6);
			free_list(*head);
			exit (EXIT_FAILURE);
		}
		error_handling_dup(head, data);
		insert_node(head, data);
		i++;
	}
}
