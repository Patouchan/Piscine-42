/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:11:11 by possen            #+#    #+#             */
/*   Updated: 2017/09/19 22:06:09 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int t;

	t = nb;
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
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

	ret = ft_iterative_power(-2, 4);
	printf("%d", ret);
	return (0);
}
