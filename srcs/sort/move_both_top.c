/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_both_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:26:39 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:23:42 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_data *data, t_stack *cheapest_node, size_t median_a,
size_t median_b)
{
	if (cheapest_node->index <= median_a
		&& cheapest_node->target->index <= median_b)
	{
		while (cheapest_node->moves && cheapest_node->target->moves)
		{
			rr(&data->stack_a, &data->stack_b);
			cheapest_node->moves--;
			cheapest_node->target->moves--;
		}
	}
	else if (cheapest_node->index > median_a
		&& cheapest_node->target->index > median_b)
	{
		while (cheapest_node->moves && cheapest_node->target->moves)
		{
			rrr(&data->stack_a, &data->stack_b);
			cheapest_node->moves--;
			cheapest_node->target->moves--;
		}
	}
}

static void	rotate_a(t_data *data, t_stack *cheapest_node, size_t median_a)
{
	while (cheapest_node->moves)
	{
		if (cheapest_node->index <= median_a)
			ra(&data->stack_a);
		else
			rra(&data->stack_a);
		cheapest_node->moves--;
	}
}

static void	rotate_b(t_data *data, t_stack *cheapest_node, size_t median_b)
{
	while (cheapest_node->target->moves)
	{
		if (cheapest_node->target->index <= median_b)
			rb(&data->stack_b);
		else
			rrb(&data->stack_b);
		cheapest_node->target->moves--;
	}
}

void	move_both_top(t_data *data)
{
	size_t	median_a;
	size_t	median_b;
	t_stack	*cheapest_node;

	median_a = stack_size(data->stack_a) / 2;
	median_b = stack_size(data->stack_b) / 2;
	cheapest_node = data->stack_a->cheapest;
	if (!cheapest_node || !cheapest_node->target)
		return ;
	rotate_both(data, cheapest_node, median_a, median_b);
	rotate_a(data, cheapest_node, median_a);
	rotate_b(data, cheapest_node, median_b);
}
