/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:44:33 by mravera           #+#    #+#             */
/*   Updated: 2021/09/05 23:53:35 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp[size];
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] > tab[j])
				pos++;
			j++;
		}
		temp[pos] = tab[i];
		pos = 0;
		i++;
	}
	while (pos < size)
	{
		tab[pos] = temp[pos];
		pos++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int tab[6] = {-2,12,34443,-2332222,0,1};
	int size = 6;
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%i,", tab[i]);
	return (0);
}*/
