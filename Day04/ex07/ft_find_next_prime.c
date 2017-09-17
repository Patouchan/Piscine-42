/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:23:07 by possen            #+#    #+#             */
/*   Updated: 2017/09/18 00:28:29 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int divi;

	divi = 2;
	while (divi < nb)
	{
		if ((nb % divi) == 0)
			return (0);
		divi++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if ((ft_is_prime(nb) == 1))
		return (nb);
	while ((ft_is_prime(nb) == 0))
	{
		nb++;
	}
	return (nb);
}

int		main(void)
{
	int ret;

	ret = ft_find_next_prime(31);
	printf("%d", ret);
	return (0);
}
