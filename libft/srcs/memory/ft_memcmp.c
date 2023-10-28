/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:16:07 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:06:17 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_buf1;
	const unsigned char	*ptr_buf2;

	ptr_buf1 = (const unsigned char *)buf1;
	ptr_buf2 = (const unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		if (ptr_buf1[i] != ptr_buf2[i])
			return (ptr_buf1[i] - ptr_buf2[i]);
		i++;
	}
	return (0);
}
