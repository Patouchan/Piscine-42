/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:34:26 by possen            #+#    #+#             */
/*   Updated: 2017/09/16 22:25:14 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int t;
	int c;

	c = 1;
	t = 0;
	while (c <= nb / 2)
	{
		t = c * c;
		{
			if (t == nb)
				return (c);
		}
		c++;
	}
	return (0);
}

int		main(void)
{
	int ret;

	ret = ft_sqrt(8);
	printf("%d", ret);
	return (0);
}
