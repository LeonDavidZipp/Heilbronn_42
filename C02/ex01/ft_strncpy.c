/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:19 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:23:22 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	str1[20] = "123456789";
// 	char	str2[20] = "abcdefgh";
// 	char	str3[20] = "abcdefgh";
// 	ft_strncpy(&str2[0], &str1[0], 6);
// 	strncpy(&str3[0], &str1[0], 6);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// }
