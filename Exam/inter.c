/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:42:11 by possen            #+#    #+#             */
/*   Updated: 2017/09/21 16:01:33 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		find(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	 if (str[i] == i)
		 return (1);
	 i++;
	}
	return (0);
}

int		doublon(char *str, char a, int c)
{
	int i;

	i = 0;
	while (i < a)
	{
	if (str[i] == c)
		return (0);
	}
	i++;
	return (1);
}

void	inter(char *prem, char *deu)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (find(prem[i], deu))
	{
		if (find(prem[i], deu))
			if (doublon(prem, prem[i], i))
				ft_putchar(prem[i]);
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
