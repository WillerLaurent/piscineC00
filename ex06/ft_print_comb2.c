/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:32:24 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/10 15:57:48 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

void	write_number(int a, int b)
{
	char c;
	char d;
	char e;
	char f;

	c = a / 10 + '0';
	d = (a % 10) + '0';
	f = (b % 10) + '0';
	e = b / 10 + '0';
	write_char(c);
	write_char(d);
	write_char(' ');
	write_char(e);
	write_char(f);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_number(a, b);
			if (a == 98 && b == 99)
				break ;
			write_char(',');
			write_char(' ');
			b++;
		}
		a++;
	}
}
