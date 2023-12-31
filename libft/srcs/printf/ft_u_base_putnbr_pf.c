/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_base_putnbr_pf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:26:41 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 09:53:44 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_u_base_putnbr_pf(unsigned long long int n, const char *base)
{
	unsigned long long int	base_len;
	int						nbr_len;

	nbr_len = 0;
	base_len = ft_strlen_pf(base);
	if (n >= base_len)
	{
		ft_u_base_putnbr_pf(n / base_len, base);
		ft_u_base_putnbr_pf(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
	nbr_len += ft_u_base_nbrlen_pf(n, base_len);
	return (nbr_len);
}
