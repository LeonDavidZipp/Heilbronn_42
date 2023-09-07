/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:37:49 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/23 17:27:55 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < nb)
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
// 	char *l = ft_strncat(dest, src, 4);
// 	printf("ft_str: %s\n", l);
// 	char *m = strncat(dest2, src, 4);
// 	printf("str: %s\n", m);
// 	return (0);
// }
