/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:53:35 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/23 14:48:49 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getlen(char	*str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	int				i;

	len_dest = ft_getlen(dest);
	len_src = ft_getlen(src);
	i = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest1[20] = "Hello";
// 	char	dest2[20] = "Hello";
// 	char	*src = "34njnscjsn!";
// 	unsigned int	i = ft_strlcat(dest1, src, 20);
// 	printf("%d\n", i);
// 	printf("%s\n", dest1);
// 	unsigned int	j = strlcat(dest2, src, 20);
// 	printf("%d\n", j);
// 	printf("%s\n", dest2);
// 	return (0);
// }
