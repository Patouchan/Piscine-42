/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:45 by possen            #+#    #+#             */
/*   Updated: 2017/09/18 00:23:21 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int guile;

	guile = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		guile = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (guile);
}

int		main(void)
{
	int ret;

	ret = ft_fibonacci(12);
	printf("%d", ret);
	return (0);
}
