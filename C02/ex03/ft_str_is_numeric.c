/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:52:52 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:20 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && '9' >= *str))
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
// 	char	*str2 = "ADGG&()&$#";
// 	char	*str3 = "12jnjnjdnc";
// 	printf("%i\n", ft_str_is_numeric(str1));
// 	printf("%i\n", ft_str_is_numeric(str2));
// 	printf("%i\n", ft_str_is_numeric(str3));
// }
