/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:06:18 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:21:03 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*current;

	if (!*stack || !(*stack)->next)
		return ;
	current = *stack;
	while (current->next->next)
		current = current->next;
	current->next->next = *stack;
	*stack = current->next;
	current->next = NULL;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	update_indexes(*stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	update_indexes(*stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	update_indexes(*stack_a);
	update_indexes(*stack_b);
	ft_printf("rrr\n");
}
