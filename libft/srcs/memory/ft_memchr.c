/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:15:59 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:06:25 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_buf;

	ptr_buf = (const unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (ptr_buf[i] == (unsigned char)c)
			return ((void *)&ptr_buf[i]);
		i++;
	}
	return (NULL);
}
