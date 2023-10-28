/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:06:18 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:20:28 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*current;

	if (!*stack_src)
		return ;
	current = *stack_src;
	*stack_src = current->next;
	current->next = *stack_dest;
	*stack_dest = current;
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	update_indexes(*stack_a);
	update_indexes(*stack_b);
	ft_putstr("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	update_indexes(*stack_a);
	update_indexes(*stack_b);
	ft_putstr("pb\n");
}
