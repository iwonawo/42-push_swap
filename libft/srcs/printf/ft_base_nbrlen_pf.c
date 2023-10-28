/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_nbrlen_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:21 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 09:52:44 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_base_nbrlen_pf(long long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
