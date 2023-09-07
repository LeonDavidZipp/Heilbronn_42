/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:48:12 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/31 17:01:21 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div_up;
	int	div_down;

	div_up = nb / 2 + 1;
	div_down = 2;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	while (div_up >= div_down)
	{
		if (nb % div_up-- == 0 || nb % div_down++ == 0)
			return (0);
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(-1));
// 	printf("%d\n", ft_is_prime(-7));
// 	printf("%d\n", ft_is_prime(2));
// 	printf("%d\n", ft_is_prime(3));
// 	printf("%d\n", ft_is_prime(4));
// 	printf("%d\n", ft_is_prime(5));
// 	printf("%d\n", ft_is_prime(6));
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(8));
// 	printf("%d\n", ft_is_prime(9));
// 	printf("%d\n", ft_is_prime(100));
// 	return (0);
// }
