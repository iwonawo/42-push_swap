/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:15:19 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/27 11:11:36 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size && (count > SIZE_MAX / size))
		return (NULL);
	res = (void *)malloc(count * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, count * size);
	return (res);
}
