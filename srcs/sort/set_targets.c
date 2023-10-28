/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_targets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:51:52 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:25:27 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_biggest_node(t_stack *stack)
{
	t_stack	*biggest;

	if (!stack)
		return (NULL);
	biggest = stack;
	while (stack)
	{
		if (stack->number > biggest->number)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}

t_stack	*find_smallest_node(t_stack *stack)
{
	t_stack	*smallest;

	if (!stack)
		return (NULL);
	smallest = stack;
	while (stack)
	{
		if (stack->number < smallest->number)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}

void	set_targets_in_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current_b;
	t_stack	*temp;
	long	closest_smaller;

	while (stack_a)
	{
		current_b = stack_b;
		temp = NULL;
		closest_smaller = LONG_MIN;
		while (current_b)
		{
			if (stack_a->number > current_b->number
				&& current_b->number > closest_smaller)
			{
				closest_smaller = current_b->number;
				temp = current_b;
			}
			current_b = current_b->next;
		}
		if (temp == NULL)
			stack_a->target = find_biggest_node(stack_b);
		else
			stack_a->target = temp;
		stack_a = stack_a->next;
	}
}

void	set_targets_in_stack_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current;
	t_stack	*temp;
	long	closest_biggest;

	current = stack_a;
	temp = NULL;
	closest_biggest = LONG_MAX;
	while (current)
	{
		if (stack_b->number < current->number
			&& current->number < closest_biggest)
		{
			closest_biggest = current->number;
			temp = current;
		}
		current = current->next;
	}
	if (temp == NULL)
		stack_b->target = find_smallest_node(stack_a);
	else
		stack_b->target = temp;
}
