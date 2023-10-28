/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:12:46 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:25:46 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_data *data)
{
	t_stack	*current;

	current = data->stack_a;
	while (current && current->next)
	{
		if (current->number < current->next->number)
			current = current->next;
		else
			return (FALSE);
	}
	return (TRUE);
}

int	sort_two(t_data *data)
{
	if (data->stack_a->number > data->stack_a->next->number)
		sa(&data->stack_a);
	return (0);
}

int	sort_small(t_data *data)
{
	size_t	size;

	size = stack_size(data->stack_a);
	find_min_max(data->stack_a, data);
	if (size < 3)
		sort_two(data);
	else if (size == 3)
	{
		if (stack_last(data->stack_a)->number == data->max_nb)
			sort_two(data);
		else if (data->stack_a->number == data->max_nb)
		{
			ra(&data->stack_a);
			sort_two(data);
		}
		else
		{
			rra(&data->stack_a);
			sort_two(data);
		}
	}
	return (0);
}
