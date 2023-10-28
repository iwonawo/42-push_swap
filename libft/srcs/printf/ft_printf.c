/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:14:35 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/15 09:52:39 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_formatcheck(va_list args, const char format)
{
	unsigned long long int	ptr;

	if (format == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (format == 'X' || format == 'x')
		return (ft_u_puthexa_pf(va_arg(args, unsigned int), format));
	else if (format == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr)
			return (ft_u_puthexa_pf(ptr, format));
		return (ft_putstr("0x0"));
	}
	else if (format == 'u')
		return (ft_u_base_putnbr_pf(va_arg(args, unsigned int), "0123456789"));
	else if (format == '%')
		return (ft_putchar_pf('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr_pf("cspdiuxX%", str[i + 1]) != 0)
		{
			length += ft_formatcheck(args, str[i + 1]);
			i++;
		}
		else
			length += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
