/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:40:50 by mmourdal          #+#    #+#             */
/*   Updated: 2022/11/23 02:26:16 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*s;
	int		max;
	int		i;

	(void)argc;
	fd = open("text", O_RDONLY);
	max = atoi(argv[1]);
	i = 0;
	printf("\n********** GET NEXT LINE : **********\n\n");
	while (++i <= max)
	{
		s = get_next_line(fd);
		printf("**\t[%d Appel] ==> %s        \t\t\t   **\n", i, s);
		free(s);
	}
	printf("\n*************************************\n\n");
}
