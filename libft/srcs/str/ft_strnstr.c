/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:18:29 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:02:48 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (n == 0 || s1[i] == '\0')
		return (NULL);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
