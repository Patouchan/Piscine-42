/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: possen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:13:01 by possen            #+#    #+#             */
/*   Updated: 2017/09/21 00:43:06 by possen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int h;

	h = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[h] != '\0' && s2[h] != '\0' && s1[h] == s2[h])
		h++;
	return (s1[h] - s2[h]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = argc;
	while (i > 1)
	{
		j = 1;
		while (j < i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				c = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = c;
			}
			j++;
		}
		i--;
	}
	i = 1;
	while (argc > i)
		ft_putstr(argv[i++]);
	return (0);
}
