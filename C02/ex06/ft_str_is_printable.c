/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:53:36 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:37 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	*str1 = "1234567890";
// 	char	*str2 = "ADG&&##G";
// 	char	*str3 = "\nfvfv";
// 	printf("%i\n", ft_str_is_printable(str1));
// 	printf("%i\n", ft_str_is_printable(str2));
// 	printf("%i\n", ft_str_is_printable(str3));
// }
