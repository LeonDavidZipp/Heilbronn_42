/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:41:32 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/06 16:35:49 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_len(int size, char **strs, char *sep)
{
	int		pos_src;
	int		ind_src;
	int		ind_sep;
	int		len;

	pos_src = 0;
	len = 0;
	while (pos_src < size)
	{
		ind_src = 0;
		ind_sep = 0;
		while (strs[pos_src][ind_src++])
			len++;
		if (pos_src < size - 1)
			while (sep[ind_sep++])
				len++;
		pos_src++;
	}
	return (len);
}

char	*ft_join(int size, char *dest, char **strs, char *sep)
{
	int		pos_src;
	int		ind_src;
	int		ind_sep;
	int		pos_dest;

	pos_src = 0;
	pos_dest = 0;
	while (pos_src < size -1)
	{
		ind_src = 0;
		ind_sep = 0;
		while (strs[pos_src][ind_src])
			dest[pos_dest++] = strs[pos_src][ind_src++];
		while (sep[ind_sep])
			dest[pos_dest++] = sep[ind_sep++];
		pos_src++;
	}
	ind_src = 0;
	while (strs[pos_src][ind_src])
		dest[pos_dest++] = strs[pos_src][ind_src++];
	dest[pos_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc((ft_get_len(size, strs, sep) + 1) * sizeof(char));
	return (ft_join(size, dest, strs, sep));
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	**arr = malloc(3 * sizeof(char *));
// 	arr[0] = "Hello";
// 	arr[1] = "Hi";
// 	arr[2] = "WTF";
// 	char	*dest = ft_strjoin(3, arr, ",hhhh,");
// 	printf("%s\n", dest);
// }
