/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:07:30 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/17 19:49:07 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		nmbr;
	char	ascii;

	nmbr = 0;
	while (nmbr <= 9)
	{
		ascii = nmbr + '0';
		write(1, &ascii, 1);
		nmbr++;
	}
}
