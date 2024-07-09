/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:41:20 by aahaded           #+#    #+#             */
/*   Updated: 2024/07/08 14:59:31 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	r;
	int	s;

	r = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			s *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = (r * 10) + (*str - '0');
		if (r < -2147483648 || r > 2147483647)
			return (0);
		str++;
	}
	return (s * r);
}
