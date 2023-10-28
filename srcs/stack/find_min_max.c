/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:06:06 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:26:04 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_max(t_stack *stack, t_data *data)
{
	t_stack	*current;

	current = stack;
	if (!current)
		return ;
	data->max_nb = current->number;
	data->min_nb = current->number;
	while (current)
	{
		if (current->number < data->min_nb)
			data->min_nb = current->number;
		else if (current->number > data->max_nb)
			data->max_nb = current->number;
		current = current->next;
	}
}
