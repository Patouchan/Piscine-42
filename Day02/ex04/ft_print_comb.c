/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 15:00:13 by possen            #+#    #+#             */
/*   Updated: 2017/09/03 21:39:31 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_print_kebab(char b, char c, char d)
{
	if (b != c && c != d && b != d)
	{
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(d);
		if (b != '7' || c != '8' || d != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char b;
	char c;
	char d;

	b = '0';
	while (b <= '7')
	{
		c = b + 1;
		while (c <= '8')
		{
			d = c + 1;
			while (d <= '9')
			{
				ft_print_kebab(b, c, d);
				d++;
			}
			c++;
		}
		b++;
	}
}
