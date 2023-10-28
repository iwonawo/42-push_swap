/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:21:23 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:23:11 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_moves_for_b_target(t_stack *stack, t_data *data)
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

void	move_a_top(t_data *data)
{
	size_t	median;
	size_t	moves;

	median = stack_size(data->stack_a) / 2;
	moves = count_moves_for_b_target(data->stack_b->target, data);
	while (moves)
	{
		if (data->stack_b->target->index <= median)
			ra(&data->stack_a);
		else
			rra(&data->stack_a);
		moves--;
	}
}
