/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:18:49 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:02:07 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_char(char const *str, char const c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (i < ft_strlen(str))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && find_char(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && find_char(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) * len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
