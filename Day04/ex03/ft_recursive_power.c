/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 19:20:46 by possen            #+#    #+#             */
/*   Updated: 2017/09/16 22:40:49 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	if (nb <= 0)
		return (0);
	if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	int ret;

	ret = ft_recursive_power(6, 8);
	printf("%d", ret);
	return (0);
}
