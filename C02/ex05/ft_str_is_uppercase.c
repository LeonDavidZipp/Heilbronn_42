/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:50:01 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:32 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!('A' <= *str && 'Z' >= *str))
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
// 	char	*str2 = "ADGG";
// 	char	*str3 = "AAjnjnjdnc";
// 	printf("%i\n", ft_str_is_uppercase(str1));
// 	printf("%i\n", ft_str_is_uppercase(str2));
// 	printf("%i\n", ft_str_is_uppercase(str3));
// }
