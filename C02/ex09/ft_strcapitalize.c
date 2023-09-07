/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:12:09 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/22 16:21:27 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
				str[i] = str[i] + 32;
		if ('a' <= str[i] && 'z' >= str[i])
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if ('0' <= str[i - 1] && '9' >= str[i - 1])
				;
			else if ('a' <= str[i - 1] && 'z' >= str[i - 1])
				;
			else if ('A' <= str[i - 1] && 'Z' >= str[i - 1])
				;
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <unistd.h>
// int	main(void)
// {
// 	char str[] = "aDD;89gGH lL";
// 	char *p_str = &str[0];
// 	char *string = ft_strcapitalize(p_str);
// 	int i = 0;
// 	while (string[i] != '\0')
// 	{
// 		write(1, &string[i], 1);
// 		i++;
// 	}
// 	return (0);
// }
