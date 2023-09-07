/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:15:44 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/05 09:32:14 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc((i + 1) * sizeof (char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s, %ld\n", ft_strdup("Helo"), sizeof(ft_strdup("Helo")));
// 	printf("%s, %ld\n", strdup("Helo"), sizeof(strdup("Helo")));
// }
