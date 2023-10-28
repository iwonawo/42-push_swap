/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:51 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:27:00 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack, t_data *data)
{
	t_stack	*current;

	if (!stack)
	{
		ft_printf("Stack list is empty or NULL.\n");
		return ;
	}
	if (stack == data->stack_a)
		ft_printf("\x1B[33m" "\nSTACK A \n" "\x1B[0m");
	else if (stack == data->stack_b)
		ft_printf("\x1B[38;5;208m" "\nSTACK B \n" "\x1B[0m");
	current = stack;
	while (current)
	{
		ft_printf("i: %d\t nb: %d\n", current->index, current->number);
		current = current->next;
	}
}
