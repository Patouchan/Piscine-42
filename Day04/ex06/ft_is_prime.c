/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:57:38 by possen            #+#    #+#             */
/*   Updated: 2017/09/11 20:00:38 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int g;

	g = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
			return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
			return (0);
	while ((g * g) <= nb)
	{
		if ((nb % g) == 0)
			return (0);
		g += 2;
	}
	return (1);
}

int		main()
{
	int ret;

	ret = ft_is_prime(2);
	printf("%d", ret);
	return (0);
}
