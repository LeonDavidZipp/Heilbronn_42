/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:23:40 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/06 16:30:07 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_arr;
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
		return (NULL);
	int_arr = (int *)malloc(len * sizeof(int));
	if (!int_arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		int_arr[i] = min;
		i++;
		min++;
	}
	return (int_arr);
}
// #include <stdio.h>
// int	main(void)
// {
//     int *int_arr = ft_range(-3, -4);
//     if (int_arr != NULL)
//     {
//         for (int i = 0; i < 9; i++)
//         {
//             printf("%d \n", int_arr[i]);
// 			printf("%ld\n", sizeof(int_arr));
//         }
//         printf("\n");
//         free(int_arr);
// 	}
// 	else
// 		printf("deez");
// 	return (0);
// }
