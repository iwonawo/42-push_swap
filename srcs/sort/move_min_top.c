/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_min_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:45:43 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:24:05 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_index(t_data *data)
{
	t_stack	*current;
	size_t	index;

	current = data->stack_a;
	index = 0;
	while (current)
	{
		if (current->number == data->min_nb)
			index = current->index;
		current = current->next;
	}
	return (index);
}

void	move_min_top(t_data *data)
{
	size_t	median;
	size_t	index_min_nb;
	size_t	moves;

	find_min_max(data->stack_a, data);
	median = stack_size(data->stack_a) / 2;
	moves = 0;
	index_min_nb = find_index(data);
	if (index_min_nb <= median)
		moves = index_min_nb;
	else
		moves = stack_size(data->stack_a) - index_min_nb;
	while (moves)
	{
		if (index_min_nb <= median)
			ra(&data->stack_a);
		else
			rra(&data->stack_a);
		moves--;
	}
}
