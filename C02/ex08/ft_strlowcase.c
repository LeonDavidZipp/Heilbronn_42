/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:06:55 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:47 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char str[] = "HHKhs^gbvH";
// 	char *str1;
// 	str1 = str;
// 	ft_strlowcase(str1);
// 	printf("%s", str);
// 	return (0);
// }
