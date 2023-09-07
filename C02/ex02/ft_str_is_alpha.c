/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:47:06 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:14 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z'))
			;
		else
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	*str1 = "abcde";
// 	char	*str2 = "ADGG";
// 	char	*str3 = "12jnjnjdnc";
// 	printf("%i\n", ft_str_is_alpha(str1));
// 	printf("%i\n", ft_str_is_alpha(str2));
// 	printf("%i\n", ft_str_is_alpha(str3));
// }
