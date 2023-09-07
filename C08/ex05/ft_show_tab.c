/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:05:09 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/04 15:37:55 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned long	i;
	int				j;

	i = 0;
	while (par[i].str != NULL)
	{
		j = 0;
		while (par[i].str[j] != '\0')
			write(1, &par[i].str[j++], 1);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
			write(1, &par[i].copy[j++], 1);
		write(1, "\n", 1);
		i++;
	}
}
