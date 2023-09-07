/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:12:25 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 19:58:09 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "1234567";
// 	char	*str2 = "qwertyuiop";
// 	int		len = ft_strlen(str);
// 	int		len2 = ft_strlen(str2);
// 	printf("%d\n", len);
// 	printf("%d", len2);
// }
