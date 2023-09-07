/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:16:30 by lzipp             #+#    #+#             */
/*   Updated: 2023/08/19 22:33:52 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	half_size;
	int	tab_value;

	i = 0;
	half_size = size / 2;
	while (i < half_size)
	{
		tab_value = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tab_value;
		i++;
	}
}
