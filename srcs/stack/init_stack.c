/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:41:32 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:26:54 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int nb, t_data *data)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		error_and_exit(data);
	new_node->number = nb;
	new_node->index = data->stack_size;
	new_node->moves = 0;
	new_node->cheapest = NULL;
	new_node->target = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	stack_addback(t_stack **stack, t_stack *new_node)
{
	t_stack	*temp;

	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

void	stack_clear(t_stack *stack)
{
	t_stack	*current;
	t_stack	*next_node;

	if (stack)
	{
		current = stack;
		while (current)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
		stack = NULL;
	}
}

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

size_t	stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
