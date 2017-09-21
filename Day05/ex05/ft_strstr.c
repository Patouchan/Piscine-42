/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 04:26:29 by possen            #+#    #+#             */
/*   Updated: 2017/09/19 22:31:47 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int taille;

	i = 0;
	j = 0;
	taille = ft_strlen(to_find);
	if (taille == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
