/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 03:30:36 by possen            #+#    #+#             */
/*   Updated: 2017/09/19 18:43:37 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		h;

	h = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[h] != '\0' && s2[h] != '\0' && s1[h] == s2[h])
		h++;
	return (s1[h] - s2[h]);
}
