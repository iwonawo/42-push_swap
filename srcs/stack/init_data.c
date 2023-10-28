/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:54:48 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/28 19:26:20 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_data(t_data *data)
{
	data->argv_valid = FALSE;
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->stack_size = 0;
}
