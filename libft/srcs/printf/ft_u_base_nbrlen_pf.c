/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_base_nbrlen_pf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:21 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 09:53:35 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_u_base_nbrlen_pf(unsigned long long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
