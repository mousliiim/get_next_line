/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:40:50 by mmourdal          #+#    #+#             */
/*   Updated: 2022/11/30 18:55:55 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd0;
	int		fd1;
	int		fd2;
	char	*s;
	int		max;
	int		i;

	if (argc != 5)
	{
		printf("./a.out [Nombre de Ligne] [File 1] [File 2] [File 3]\n");
		return (0);
	}
	max = atoi(argv[1]);
	fd0 = open(argv[2], O_RDONLY);
	fd1 = open(argv[3], O_RDONLY);
	fd2 = open(argv[4], O_RDONLY);
	i = 0;
	printf("\n********** GET NEXT LINE : **********\n\n");
	while (++i <= max)
	{
		s = get_next_line(fd0);
		printf("fd0\t[%d Appel] ==> %s        \t\t\t   **\n", i, s);
		free(s);
		s = get_next_line(fd1);
		printf("fd1\t[%d Appel] ==> %s        \t\t\t   **\n", i, s);
		free(s);
		s = get_next_line(fd2);
		printf("fd2\t[%d Appel] ==> %s        \t\t\t   **\n", i, s);
		free(s);
	}
	printf("\n*************************************\n\n");
	close(fd0);
	close(fd1);
	close(fd2);
}
