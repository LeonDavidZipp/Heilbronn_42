/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:38:23 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:27 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!('a' <= *str && 'z' >= *str))
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
// 	char	*str3 = "jnjnjdnc";
// 	printf("%i\n", ft_str_is_lowercase(str1));
// 	printf("%i\n", ft_str_is_lowercase(str2));
// 	printf("%i\n", ft_str_is_lowercase(str3));
// }
