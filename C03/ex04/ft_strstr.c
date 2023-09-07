/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:56:52 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/28 10:26:35 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int	ft_get_length(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_get_length(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (j == len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*str1 = "Yes, this is nice!";
// 	char	*str2 = "Well yes, Hello";
// 	char	*str3 = "HHello World!";
// 	char	*to_find = "a";
// 	char *l = ft_strstr(str1, to_find);
// 	char *m = ft_strstr(str2, to_find);
// 	char *n = ft_strstr(str3, to_find);
// 	printf("ft_str: %s\n", l);
// 	printf("ft_str: %s\n", m);
// 	printf("ft_str: %s\n", n);
// 	char *o = strstr(str1, to_find);
// 	char *p = strstr(str2, to_find);
// 	char *h = strstr(str3, to_find);
// 	printf("str: %s\n", o);
// 	printf("str: %s\n", p);
// 	printf("str: %s\n", h);
// 	return (0);
// }
