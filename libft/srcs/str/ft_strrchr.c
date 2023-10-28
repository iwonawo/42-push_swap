/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:18:37 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:02:23 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = len;
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	if ((char)c == '\0')
		return ((char *)&str[len]);
	return (NULL);
}
