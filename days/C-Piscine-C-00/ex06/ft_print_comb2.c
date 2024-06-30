/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:40:54 by aahaded           #+#    #+#             */
/*   Updated: 2024/06/26 19:01:11 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	a;
	int	b;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		a = i / 10;
		b = i % 10;
		ft_putchar(a + '0');
		ft_putchar(b + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			ft_putchar(' ');
			int_to_char(j);
			if (i < 98)
				write(1, ", ", 1);
			j++;
		}
		i++;
	}
}
