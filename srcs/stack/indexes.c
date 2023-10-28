/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:04:10 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:26:11 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_indexes(t_stack *stack)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = stack;
	if (!current)
		return ;
	while (current)
	{
		current->index = i;
		current = current->next;
		i++;
	}
}
