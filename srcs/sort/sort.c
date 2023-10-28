/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:38:37 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:25:54 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort(t_data *data)
{
	find_min_max(data->stack_a, data);
	pb(&data->stack_a, &data->stack_b);
	if (data->stack_size > 4 && is_sorted(data) == FALSE)
		pb(&data->stack_a, &data->stack_b);
	while (stack_size(data->stack_a) > 3 && is_sorted(data) == FALSE)
	{
		set_targets_in_stack_b(data->stack_a, data->stack_b);
		set_cheapest(data->stack_a, data);
		move_both_top(data);
		pb(&data->stack_a, &data->stack_b);
	}
	sort_small(data);
	while (stack_size(data->stack_b))
	{
		set_targets_in_stack_a(data->stack_a, data->stack_b);
		move_a_top(data);
		pa(&data->stack_b, &data->stack_a);
	}
	move_min_top(data);
	return (0);
}
