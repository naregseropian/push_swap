/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:52:28 by seropian          #+#    #+#             */
/*   Updated: 2023/06/29 14:39:43 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	get_list_size(t_list_node *head)
{
	t_list_node	*tmp;
	size_t		i;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next_node;
		i++;
	}
	return (i);
}

int	get_list_length(t_list_node *head)
{
	t_list_node	*current;
	int			length;

	current = head;
	length = 0;
	while (current != NULL)
	{
		length++;
		current = current->next_node;
	}
	return (length);
}

void	free_list(t_list_node *head)
{
	t_list_node	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next_node;
		free(temp);
	}
}

void	ft_free_array(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	print_list(t_list_node *head)
{
	t_list_node	*current; 

	current = head;
	while (current != NULL)
	{
		ft_printf("%d ", current-> data);
		current = current->next_node;
	}
	ft_printf("\n");
}
