/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:18:17 by iwozniak          #+#    #+#             */
/*   Updated: 2023/07/25 10:03:05 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	size_t	len;
	size_t	i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	i = 0;
	fresh = (char *)malloc(sizeof(char) * len + 1);
	if (!fresh)
		return (NULL);
	while (i < len)
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
