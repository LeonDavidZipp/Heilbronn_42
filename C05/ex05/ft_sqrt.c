/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:38:12 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/31 20:28:34 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rt_up;
	int	rt_down;
	int	max_loop;

	rt_up = nb / 3;
	rt_down = 0;
	max_loop = 46341;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	while (rt_up >= rt_down && max_loop)
	{
		if (rt_up * rt_up == nb)
			return (rt_up);
		else if (rt_down * rt_down == nb)
			return (rt_down);
		rt_up--;
		rt_down++;
		max_loop--;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(5));
// 	printf("%d\n", ft_sqrt(6));
// 	printf("%d\n", ft_sqrt(7));
// 	printf("%d\n", ft_sqrt(8));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(1000000));
// 	return (0);
// }
