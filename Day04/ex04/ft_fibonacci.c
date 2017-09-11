/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:45 by possen            #+#    #+#             */
/*   Updated: 2017/09/11 16:24:24 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (index);
	else
		return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

int		main()
{
	int ret;

	ret = ft_fibonacci(5);
	printf("%d", ret);
	return (0);
}
