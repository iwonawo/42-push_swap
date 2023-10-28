/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:43:13 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:18:45 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

/* ************************************************************************** */
/* CONSTATNS                                                                  */
/* ************************************************************************** */

# define TRUE	1
# define FALSE	0

/* ************************************************************************** */
/* STRUCT                                                                     */
/* ************************************************************************** */

typedef struct s_stack
{
	int				number;
	size_t			index;
	size_t			moves;
	struct s_stack	*cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	size_t	stack_size;
	int		max_nb;
	int		min_nb;
	int		argv_valid;
}			t_data;

/* ************************************************************************** */
/* srcs/clean/clean.c                                                         */
/* ************************************************************************** */

void	error_and_exit(t_data *data);
void	free_split(char **array);
void	free_split_and_exit(t_data *data, char **arr_split);
void	free_stacks(t_data *data);

/* ************************************************************************** */
/* srcs/operations                                                            */
/* ************************************************************************** */

/* push.c */
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);

/* reverse.c */
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* rotate.c */
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

/* swap.c */
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

/* ************************************************************************** */
/* srcs/sort                                                                  */
/* ************************************************************************** */

/* move_a_top.c */
void	move_a_top(t_data *data);

/* move_both_top.c */
void	move_both_top(t_data *data);

/* move_min_top */
void	move_min_top(t_data *data);

/* set_targets.c */
t_stack	*find_biggest_node(t_stack *stack);
t_stack	*find_smallest_node(t_stack *stack);
void	set_targets_in_stack_b(t_stack *stack_a, t_stack *stack_b);
void	set_targets_in_stack_a(t_stack *stack_a, t_stack *stack_b);

/* set_cheapest.c */
void	set_cheapest(t_stack *stack, t_data *data);

/* sort_small.c */
int		is_sorted(t_data *data);
int		sort_two(t_data *data);
int		sort_small(t_data *data);

/* sort.c */
int		sort(t_data *data);

/* ************************************************************************** */
/* srcs/stack                                                                 */
/* ************************************************************************** */

/* find_min_max.c */
void	find_min_max(t_stack *stack, t_data *data);

/* indexes.c */
void	update_indexes(t_stack *stack);

/* init_data.c */
void	init_data(t_data *data);

/* init_stack.c */
t_stack	*stack_new(int nb, t_data *data);
void	stack_addback(t_stack **stack, t_stack *new_node);
void	stack_clear(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
size_t	stack_size(t_stack *stack);

/* ************************************************************************** */
/* srcs/utils                                                                 */
/* ************************************************************************** */

/* utils.c */
void	print_stack(t_stack *stack, t_data *data);

/* ************************************************************************** */
/* srcs/validation                                                            */
/* ************************************************************************** */

/* checks.c */
long	check_digit_and_convert(t_data *data, char **arr_split, int i);
void	check_duplicates(t_data *data);

/* validation.c */
void	process_argument(t_data *data, char *arg);
void	validate_arguments(t_data *data, char **argv);

#endif
