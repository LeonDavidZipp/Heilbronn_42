/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:28:37 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/30 11:40:16 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = nb;
	if (power == 0 || nb == 1)
		return (1);
	else if (power == 0 && nb == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else if (power == 1)
		return (result);
	while (i < power - 1)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 10));
// 	printf("%d\n", ft_iterative_power(1, 10));
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(6, 0));
// 	printf("%d\n", ft_iterative_power(15, -2));
// 	return (0);
// }
