/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:35:39 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:06:00 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	if (!dest && !src)
		return (dest);
	if (ptr_dest == ptr_src)
		return (dest);
	if (ptr_dest > ptr_src)
	{
		while (n--)
			*(ptr_dest + n) = *(ptr_src + n);
	}
	else
	{
		while (n)
		{
			*ptr_dest++ = *ptr_src++;
			n--;
		}
	}
	return (dest);
}
