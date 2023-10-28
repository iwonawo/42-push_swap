/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:55:28 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:24:58 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	moves_node_a(t_stack *stack, t_data *data)
{
	size_t	moves;
	size_t	median;
	size_t	size;

	moves = 0;
	size = stack_size(data->stack_a);
	median = size / 2;
	if (stack->index <= median)
	{
		moves = stack->index;
		stack->moves = moves;
	}
	else
	{
		moves = size - stack->index;
		stack->moves = moves;
	}
	return (moves);
}

static size_t	moves_target(t_stack *stack, t_data *data)
{
	size_t	moves;
	size_t	median;
	size_t	size;

	moves = 0;
	size = stack_size(data->stack_b);
	median = size / 2;
	if (stack->index <= median)
	{
		moves = stack->index;
		stack->moves = moves;
	}
	else
	{
		moves = size - stack->index;
		stack->moves = moves;
	}
	return (moves);
}

static size_t	sum_moves(t_stack *stack, t_data *data)
{
	size_t	sum_moves;

	sum_moves = moves_node_a(stack, data) + moves_target(stack->target, data);
	return (sum_moves);
}

void	set_cheapest(t_stack *stack, t_data *data)
{
	t_stack	*current;
	t_stack	*temp;
	size_t	push_cost;
	size_t	init_moves;

	current = stack;
	temp = NULL;
	push_cost = 0;
	init_moves = stack_size(stack);
	while (current)
	{
		push_cost = sum_moves(current, data);
		if (push_cost == 0)
		{
			current->cheapest = current;
			return ;
		}
		else if (push_cost < init_moves)
		{
			init_moves = push_cost;
			temp = current;
		}
		current = current->next;
	}
	stack->cheapest = temp;
}
