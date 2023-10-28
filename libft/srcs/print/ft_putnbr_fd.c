/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:16:55 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 10:31:04 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(long long int n, int fd)
{
	const char	*base;

	base = "0123456789";
	if (n == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
		write(fd, &base[n], 1);
}

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == -2147483648)
// 		ft_putstr_fd("-2147483648", fd);
// 	else if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		n = n * -1;
// 		ft_putnbr_fd(n, fd);
// 	}
// 	else if (n > 9)
// 	{
// 		ft_putnbr_fd((n / 10), fd);
// 		ft_putnbr_fd((n % 10), fd);
// 	}
// 	else if (n < 10)
// 		ft_putchar_fd((n + 48), fd);
// }
