/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:45:01 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/11 11:21:32 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write_char('-');
		nb = nb * (-1);
		if (nb == -2147483648)
		{
			write_char('2');
			nb = 147483648;
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	write_char(nb % 10 + '0');
}