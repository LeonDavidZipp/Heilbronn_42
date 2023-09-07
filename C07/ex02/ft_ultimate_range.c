/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:46:26 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/06 20:06:20 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	len = 0;
	while (min + len < max)
	{
		(*range)[len] = min + len;
		len++;
	}
	return (len);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int *myRange = NULL;
// 	int **range = &myRange;	
// 	printf("%d\n", ft_ultimate_range(range, 150, 10));
// 	return (0);
// }
