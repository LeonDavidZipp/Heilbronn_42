/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:19 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:04:35 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	str1[20] = "1234";
// 	char	str2[20] = "abcdefgh";
// 	char	str3[20] = "abcdefgh";
// 	ft_strcpy(&str2[0], &str1[0]);
// 	strcpy(&str3[0], &str1[0]);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// }
