/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:33:15 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:27:32 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_argument(t_data *data, char *arg)
{
	int		j;
	int		nb;
	char	**arr_split;
	t_stack	*new_node;

	arr_split = ft_split(arg, 32);
	j = 0;
	if (!arr_split[j])
		free_split_and_exit(data, arr_split);
	while (arr_split[j])
	{
		nb = check_digit_and_convert(data, arr_split, j);
		new_node = stack_new(nb, data);
		data->stack_size++;
		stack_addback(&data->stack_a, new_node);
		j++;
	}
	free_split(arr_split);
}

void	validate_arguments(t_data *data, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		process_argument(data, argv[i]);
		i++;
	}
	check_duplicates(data);
	data->argv_valid = TRUE;
}
