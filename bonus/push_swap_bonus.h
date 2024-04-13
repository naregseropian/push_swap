/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:37:42 by nseropia          #+#    #+#             */
/*   Updated: 2023/07/02 18:00:58 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include "../lib/libft/libft.h"
# include "../lib/ft_printf/ft_printf.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_list_node {
	int					data;
	int					index;
	struct s_list_node	*next_node;
}	t_list_node;

typedef struct mini_s {
	char		**array;
	long long	data;
	int			i;
	int			j;
}	t_mini;

/* BUILD_LIST*/
void	insert_node(t_list_node **head, int data);
int		is_duplicate(t_list_node *head, int data);
int		is_sorted(t_list_node *head);
void	parse_and_insert_q(t_list_node **head, char *input);
void	parse_and_insert(t_list_node **head, char **argv, int argc);

/* ERROR_HANDLING */
void	error_handling_p_and_i_q(t_list_node **head, t_mini stash, int i);
void	error_handling_list_len_q(t_list_node **head, t_mini stash);
void	error_handling_max_min_q(t_list_node **head, t_mini stash);

void	error_handling_dig(t_list_node **head, char arg);
void	error_handling_dup(t_list_node **head, long data);

/* HELPER FUNCTIONS */
int		get_list_length(t_list_node *head);
void	free_list(t_list_node *head);
void	print_list(t_list_node *head);
void	ft_free_array(char **arr);

/* SORTING */
void	set_index(t_list_node **head);
void	sort_numbers(t_list_node **head_a, t_list_node **head_b);

/* DO_SHORTCUTS */
void	do_sa_ra(t_list_node **head_a);
void	do_ra_ra(t_list_node **head_a);
void	do_pa_sa(t_list_node **head_a, t_list_node **head_b);

/* SORTING_SMALL */
void	sort_two_numbers(t_list_node **head);
void	sort_three_numbers(t_list_node **head);
void	sort_five_numbers(t_list_node **head_a, t_list_node **head_b);

/* SORTING_LARGE */
void	radix_sort(t_list_node **head_a, t_list_node **head_b);
int		get_max_bits(t_list_node **head);

/* INSTRUCTIONS */
void	pa(t_list_node **head_a, t_list_node **head_b);
void	pb(t_list_node **head_a, t_list_node **head_b);

void	sa(t_list_node **head);
void	sb(t_list_node **head);
void	ss(t_list_node **head_a, t_list_node **head_b);

void	ra(t_list_node **head);
void	rb(t_list_node **head);
void	rr(t_list_node **head_a, t_list_node **head_b);
void	rra(t_list_node **head);
void	rra_wo_print(t_list_node **head);
void	rrb(t_list_node **head);
void	rrb_wo_print(t_list_node **head);
void	rrr(t_list_node **head_a, t_list_node **head_b);

/* GET_NEXT_LINE */
char	*get_next_line(int fd);
char	*ft_read_text(int fd, char *static_buffer);
char	*ft_get_line(char *static_buffer);
char	*ft_update_static_buffer(char *static_buffer);
char	*ft_gnl_strchr(char *s, int c);
int		ft_gnl_strlen(char *str);
char	*ft_gnl_strjoin(char *s1, char *s2);

/* CHECKER */
int		do_instructions(t_list_node **head_a, t_list_node **head_b, \
			char *input, int *flag);
void	mini_gnl(t_list_node **head_a, t_list_node **head_b, \
			char *input, int *flag);
#endif
