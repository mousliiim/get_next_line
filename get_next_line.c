/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:40:50 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/31 02:51:27 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	char	*readstr;
	char	*previous;

	if (!BUFFER_SIZE || BUFFER_SIZE < 1 || fd < 0 || read(fd, 0, 0) < 0)
		return (0);
}
