/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:07:50 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:27:20 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_rest_for_digits(t_data *data, char **arr_split, int i)
{
	int		k;

	k = 1;
	while (arr_split[i][k] != '\0')
	{
		if (!ft_isdigit(arr_split[i][k]))
			free_split_and_exit(data, arr_split);
		k++;
	}
}

long	check_digit_and_convert(t_data *data, char **arr_split, int i)
{
	int		j;
	long	number;

	j = 0;
	while (arr_split[i][j] != '\0')
	{
		if ((arr_split[i][j] == '-' || arr_split[i][j] == '+')
			&& arr_split[i][j + 1] != 32)
		{
			check_rest_for_digits(data, arr_split, i);
			j++;
		}
		if (!ft_isdigit(arr_split[i][j]))
			free_split_and_exit(data, arr_split);
		if (j > 18)
			free_split_and_exit(data, arr_split);
		j++;
	}
	number = ft_atoi(arr_split[i]);
	if (number < INT_MIN || number > INT_MAX)
		free_split_and_exit(data, arr_split);
	return (number);
}

void	check_duplicates(t_data *data)
{
	t_stack	*current;
	t_stack	*temp;

	current = data->stack_a;
	while (current)
	{
		temp = current->next;
		while (temp)
		{
			if (current->number == temp->number)
				error_and_exit(data);
			temp = temp->next;
		}
		current = current->next;
	}
}
