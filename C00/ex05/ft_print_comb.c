/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:35:17 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/17 19:49:19 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		number;
	char	n1;
	char	n2;
	char	n3;

	number = 12;
	while (number <= 789)
	{
		n1 = (number / 100) + '0';
		n2 = (number % 100) / 10 + '0';
		n3 = number - (number / 100) * 100 - (number % 100) / 10 * 10 + '0';
		if ((n1 < n2) && (n1 < n3) && (n2 < n3))
		{
			write(1, &n1, 1);
			write(1, &n2, 1);
			write(1, &n3, 1);
			if (number < 789)
			{
				write(1, ", ", 2);
			}
		}
		number++;
	}
}
