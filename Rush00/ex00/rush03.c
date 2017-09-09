/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 15:23:24 by jhamon            #+#    #+#             */
/*   Updated: 2017/09/03 15:23:29 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_while_y_end(int x)
{
	int i;

	ft_putchar('A');
	i = 2;
	while (x > 2 && i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_while_y_mid(int x, int y)
{
	int j;
	int i;

	j = 2;
	while (y > 2 && j < y)
	{
		ft_putchar('B');
		i = 2;
		while (x > 2 && i < x)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	ft_while_y_start(int x)
{
	int i;

	ft_putchar('A');
	i = 2;
	while (x > 2 && i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		return (0);
	}
	ft_while_y_start(x);
	ft_while_y_mid(x, y);
	if (y > 1)
		ft_while_y_end(x);
	return (0);
}
