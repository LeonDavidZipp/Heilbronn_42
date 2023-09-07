/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:34:29 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/29 13:57:44 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return (1);
	else if (power == 0 && nb == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(0, 10));
// 	printf("%d\n", ft_recursive_power(1, 10));
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(6, 0));
// 	printf("%d\n", ft_recursive_power(15, -1));
// 	return (0);
// }
