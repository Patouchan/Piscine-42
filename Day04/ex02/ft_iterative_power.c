/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:11:11 by possen            #+#    #+#             */
/*   Updated: 2017/09/16 22:43:52 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int t;

	t = nb;
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		t = t * nb;
		power--;
	}
	return (t);
}

int		main(void)
{
	int ret;

	ret = ft_iterative_power(6, 8);
	printf("%d", ret);
	return (0);
}
