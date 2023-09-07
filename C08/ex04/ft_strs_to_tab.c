/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:56:21 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/04 16:18:38 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_get_size(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;
	char				*str;

	i = 0;
	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_get_size(av[i]);
		arr[i].str = av[i];
		str = (char *)malloc(ft_get_size(av[i]) + 1);
		arr[i].copy = ft_strcpy(str, av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = NULL;
	arr[i].copy = NULL;
	return (arr);
}

// #include <unistd.h>
// void	ft_putnbr(int nb)
// {
// 	long	nbl;
// 	char	c;

// 	nbl = (long) nb;
// 	if (nb == 0)
// 	{
// 		write(1, "0", 1);
// 		return ;
// 	}
// 	if (nbl < 0)
// 	{
// 		nbl = nbl * -1;
// 		write(1, "-", 1);
// 	}
// 	if (nbl / 10 > 0)
// 		ft_putnbr(nbl / 10);
// 	c = nbl % 10 + '0';
// 	write(1, &c, 1);
// 	return ;
// }

// void	ft_show_tab(struct s_stock_str *par)
// {
// 	unsigned long	i;
// 	int				j;

// 	i = 0;
// 	while (par[i].str != NULL)
// 	{
// 		j = 0;
// 		while (par[i].str[j] != '\0')
// 			write(1, &par[i].str[j++], 1);
// 		write(1, "\n", 1);
// 		ft_putnbr(par[i].size);
// 		write(1, "\n", 1);
// 		j = 0;
// 		while (par[i].copy[j] != '\0')
// 			write(1, &par[i].copy[j++], 1);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	*words[] = {"apple", "banana", "cherry", "date"};
// 	ft_show_tab(ft_strs_to_tab(4, words));
// 	return (0);
// }
