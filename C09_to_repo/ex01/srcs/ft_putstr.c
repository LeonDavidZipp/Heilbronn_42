/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:09:59 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 19:58:31 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "1234567";
// 	char	*str2 = "qwertyuiop";
// 	ft_putstr(str);
// 	printf("\n");
// 	ft_putstr(str2);
// }
