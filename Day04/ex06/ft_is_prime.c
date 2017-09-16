/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:57:38 by possen            #+#    #+#             */
/*   Updated: 2017/09/16 22:30:27 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int divider;

	divider = 2;
	while (divider < nb)
	{
		if ((nb % divider) == 0)
			return (0);
		divider++;
	}
	return (1);
}

int		main(void)
{
	int ret;

	ret = ft_is_prime(37);
	printf("%d", ret);
	return (0);
}
