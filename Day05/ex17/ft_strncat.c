/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 03:59:45 by possen            #+#    #+#             */
/*   Updated: 2017/09/19 21:32:26 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int k;
	int s;

	k = 0;
	s = 0;
	while (dest[k])
	{
		k++;
		while (src[s] && s > nb)
			k++;
		s++;
		dest[k] = src[s];
	}
	dest[k] = '\0';
	return (dest);
}
