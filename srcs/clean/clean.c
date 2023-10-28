/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:41:14 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:19:48 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_and_exit(t_data *data)
{
	ft_putstr_fd("Error\n", 2);
	free_stacks(data);
	exit (1);
}

void	free_split(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_split_and_exit(t_data *data, char **arr_split)
{
	free_split(arr_split);
	error_and_exit(data);
}

void	free_stacks(t_data *data)
{
	stack_clear(data->stack_a);
	stack_clear(data->stack_b);
}
