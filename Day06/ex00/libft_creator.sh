# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: possen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/21 05:10:36 by possen            #+#    #+#              #
#    Updated: 2017/09/21 05:34:13 by possen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o
ranlib libft.a
