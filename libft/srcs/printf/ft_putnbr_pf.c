/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:16:55 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 09:53:11 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_pf(long long int n)
{
	const char	*base;
	int			nbr_len;

	nbr_len = 0;
	base = "0123456789";
	if (n == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		nbr_len += ft_putnbr_pf(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr_pf(n / 10);
		ft_putnbr_pf(n % 10);
	}
	else
		write(1, &base[n], 1);
	nbr_len += ft_base_nbrlen_pf(n, ft_strlen_pf(base));
	return (nbr_len);
}
