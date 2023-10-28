/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:06:18 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:21:44 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*current;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = temp->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = temp;
	temp->next = NULL;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	update_indexes(*stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	update_indexes(*stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	update_indexes(*stack_a);
	update_indexes(*stack_b);
	ft_printf("rr\n");
}
