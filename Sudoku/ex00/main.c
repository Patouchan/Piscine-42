/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 17:07:32 by sgarcia           #+#    #+#             */
/*   Updated: 2017/09/10 21:38:27 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		transformator(char grid[9][9], char **argv)
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			grid[y][x] = argv[y + 1][x];
			if (grid[y][x] > '9' && grid[y][x] <= '0' && grid[y][x] != '.')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}

void	print(char grid[9][9])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = grid[i][j];
			write(1, &c, 1);
			if (j == 8)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char grid[9][9];

	if (argc == 10)
	{
		if (transformator(grid, argv) == 0)
			return (0);
		mother(grid, 0);
		print(grid);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
