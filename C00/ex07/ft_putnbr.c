/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:06:41 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/17 19:37:14 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	max_divisor;

	max_divisor = 1000000000;
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		while (max_divisor >= 10)
		{
			if (nb / max_divisor > 0)
			{
				write(1, (char [1]){nb / max_divisor + '0'}, 1);
				nb = nb - nb / max_divisor * max_divisor;
			}
			max_divisor = max_divisor / 10;
		}
		write(1, (char [1]){nb % 10 + '0'}, 1);
	}
	else
	{
		write(1, "-2147483648", 12);
	}
}
