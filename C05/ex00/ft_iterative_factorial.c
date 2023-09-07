/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:41:49 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/30 11:25:25 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb == 2)
		return (2);
	else if (nb < 0)
		return (0);
	while (nb - 1 > 0)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(6));
// 	printf("%d\n", ft_iterative_factorial(15));
// }
