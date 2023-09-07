/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:17:21 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/30 13:44:01 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[100] = "abcde78";
// 	char	dest2[100] = "abcde78";
// 	char	src[] = " Hello World!";
// 	char *l = ft_strcat(dest, src);
// 	char *m = strcat(dest2, src);
// 	printf("ft_str: %s\n", l);
// 	printf("str: %s\n", m);
// 	return (0);
// }
