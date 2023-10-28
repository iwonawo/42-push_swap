/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:40:22 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:27:41 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		exit (1);
	init_data(&data);
	validate_arguments(&data, argv);
	if (data.argv_valid == FALSE)
		return (error_and_exit(&data), 1);
	else if (data.argv_valid == TRUE && is_sorted(&data) == TRUE)
		return (free_stacks(&data), 0);
	else if (data.argv_valid == TRUE && is_sorted(&data) == FALSE)
	{
		if (data.stack_size <= 3)
			sort_small(&data);
		else
			sort(&data);
	}
	free_stacks(&data);
	return (0);
}
