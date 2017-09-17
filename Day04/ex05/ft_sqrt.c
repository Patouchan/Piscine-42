/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:34:26 by possen            #+#    #+#             */
/*   Updated: 2017/09/18 00:23:43 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (nb > (i * i))
		i++;
	if (nb == (i * i))
		return (i);
	else
		return (0);
}

int		main(void)
{
	int ret;

	ret = ft_sqrt(8);
	printf("%d", ret);
	return (0);
}
