/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:09:44 by mmourdal          #+#    #+#             */
/*   Updated: 2022/11/03 15:15:01 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*destcp;
	const char		*srccp;

	destcp = dest;
	srccp = src;
	if (dest == NULL && src == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		destcp[i] = srccp[i];
		i++;
	}
	return (dest);
}
