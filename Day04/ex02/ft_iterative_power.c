/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:11:11 by possen            #+#    #+#             */
/*   Updated: 2017/09/08 16:38:14 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int t;

	t = nb;
	{
		if (nb < 0)
		return (0);
		while (!(t == power))
		{
		nb = nb * (t - 1);
			t--;
			power = t;
		}
		return(power);
	}
}

int		main()
{
	int ret;

	ret = ft_iterative_power();
	printf("%d", ret);
	return (0);
}
