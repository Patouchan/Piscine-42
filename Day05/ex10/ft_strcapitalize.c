/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 23:55:00 by possen            #+#    #+#             */
/*   Updated: 2017/09/20 00:15:30 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i + 1])
	{
		if ((str[i] >= 32 && str[i] <= 47) && (str[i + 1] >= 97 &&
			str[i + 1] <= 122))
			str[i +1] -= 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}
