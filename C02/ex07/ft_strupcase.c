/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:03:25 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:31:41 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && 'z' >= str[i])
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char str[] = "hbvhs^gbvH";
// 	char *str1;
// 	str1 = str;
// 	ft_strupcase(str1);
// 	printf("%s", str);
// 	return (0);
// }
