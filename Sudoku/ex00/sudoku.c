/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:39:18 by sgarcia           #+#    #+#             */
/*   Updated: 2017/09/13 18:00:12 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		line(int k, char grid[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[j][i] == k)
			return (0);
		j++;
	}
	return (1);
}

int		col(int k, char grid[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[j][i] == k)
			return (0);
		i++;
	}
	return (1);
}

int		square(int k, char grid[9][9], int i, int j)
{
	int starti;
	int startj;

	starti = 3 * (i / 3);
	startj = 3 * (j / 3);
	i = starti;
	j = startj;
	while (i < (starti + 3))
	{
		while (j < (startj + 3))
		{
			if (grid[i][j] == k)
				return (0);
			j++;
		}
		j = j - 3;
		i++;
	}
	return (1);
}

int		mother(char grid[9][9], int pos)
{
	int i;
	int j;
	int k;

	i = pos / 9;
	j = pos % 9;
	k = '1';
	if (pos == 9 * 9)
		return (1);
	if (grid[j][i] != '.')
		return (mother(grid, pos + 1));
	while (k <= '9')
	{
		if (line(k, grid, i) == 1 && col(k, grid, j) == 1
		&& square(k, grid, j, i) == 1)
		{
			grid[j][i] = k;
			if (mother(grid, pos + 1))
				return (1);
		}
		k++;
	}
	grid[j][i] = '.';
	return (0);
}
