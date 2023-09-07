/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:40:25 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/29 13:46:28 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_power(int nb, int exp)
{
	int	i;
	int	result;

	i = 0;
	result = nb;
	if (exp == 0)
		return (1);
	while (i < exp - 1)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

int	ft_conv_to_nb(char *str, int sign)
{
	int		i;
	int		len;
	int		nb;

	i = 0;
	len = 0;
	nb = 0;
	while (str[len] != '\0')
		len++;
	while (*str)
	{
		nb += (*str - '0') * ft_power(10, len - 1);
		len--;
		str++;
	}
	if (sign < 0)
		nb = -nb;
	return (nb);
}

int	ft_find_nb(char *str, int search, int sign)
{
	char	nb_arr[11];
	char	*nb_ptr;

	nb_ptr = nb_arr;
	while (*str)
	{
		if (search && *str == '-')
			sign = -sign;
		else if (search && ((*str >= 'a' && *str <= 'z')
				|| (*str >= 'A' && *str <= 'Z')))
			return (0);
		else if (search && *str >= '0' && *str <= '9')
		{
			search = 0;
			continue ;
		}
		else if (!search && *str >= '0' && *str <= '9')
			*nb_ptr++ = *str;
		else if (!search && !(*str >= '0' && *str <= '9'))
			break ;
		str++;
	}
	*nb_ptr = '\0';
	return (ft_conv_to_nb(&nb_arr[0], sign));
}

int	ft_atoi(char *str)
{
	int		search;
	int		sign;

	search = 1;
	sign = 1;
	return (ft_find_nb(str, search, sign));
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("12345"));
// 	printf("%d\n", ft_atoi("-54321"));
// 	printf("%d\n", ft_atoi("  4567"));
// 	printf("%d\n", ft_atoi("+6789"));
// 	printf("%d\n", ft_atoi("123ah"));
// 	printf("%d\n", ft_atoi("0"));
// 	printf("%d\n", ft_atoi("-0"));
// 	printf("%d\n", ft_atoi("00123"));
// 	printf("%d\n", ft_atoi("+00123"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("2147483648"));
// 	printf("%d\n", ft_atoi("-2147483649"));
// 	printf("%d\n", ft_atoi("-"));
// 	printf("%d\n", ft_atoi("+"));
// 	printf("%d\n", ft_atoi(""));
// 	printf("%d\n", ft_atoi(" "));
// 	printf("%d\n", ft_atoi("1 2"));
// 	printf("%d\n", ft_atoi("  + 12 "));
// 	printf("%d\n", ft_atoi("abc"));
// 	printf("%d\n", ft_atoi("+abc"));
// 	printf("%d\n", ft_atoi("123+"));
// 	printf("%d\n", ft_atoi(" +0 "));
// 	printf("%d\n", ft_atoi("+-+123"));
// 	printf("%d\n", ft_atoi("++-123"));
// 	printf("%d\n", ft_atoi("a-bc123"));
// 	printf("%d\n", ft_atoi("1F1"));

// 	return (0);
// }
