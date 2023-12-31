/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:54:35 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:32:28 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	if (size > 0)
	{
		i = 0;
		while (i < len && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main()
// {
// 	char	str1[] = "abcde78";
// 	char	str2[6];
// 	char	str3[6];
// 	unsigned int	l = ft_strlcpy(&str2[0], &str1[0], 6);
// 	unsigned int	m = strlcpy(&str3[0], &str1[0], 6);
// 	printf("%s\n", str2);
// 	write(1, (char[1]){l + '0'}, 1);
// 	printf("\n");
// 	printf("%s\n", str3);
// 	write(1, (char[1]){m + '0'}, 1);
// }
