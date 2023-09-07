/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:13:11 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/28 17:42:00 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c;

	nbl = (long) nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	if (nbl / 10 > 0)
		ft_putnbr(nbl / 10);
	c = nbl % 10 + '0';
	write(1, &c, 1);
	return ;
}
// int	main(void)
// {
// 	ft_putnbr(-2147483647);
// 	write(1, "\n", 1);
// 	ft_putnbr(1344);
// 	write(1, "\n", 1);
// 	ft_putnbr(10);
// 	write(1, "\n", 1);
// 	ft_putnbr(100);
// 	write(1, "\n", 1);
// 	ft_putnbr(-1001);
// 	return (0);
// }
