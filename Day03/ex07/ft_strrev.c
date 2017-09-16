/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 21:01:35 by possen            #+#    #+#             */
/*   Updated: 2017/09/13 00:41:37 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*ft_strrev(char *str)
{
	char	v;
	int		i;
	int		g;

	i = 0;
	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	g--;
	while (i < g)
	{
		v = str[i];
		str[i] = str[g];
		str[g] = v;
		i++;
		g--;
	}
	return (str);
}
