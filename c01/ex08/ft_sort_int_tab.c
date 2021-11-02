/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:44:33 by mravera           #+#    #+#             */
/*   Updated: 2021/09/06 18:01:31 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	int tab[5] = {23,45,31,-3,0};
	int size = 5;
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%i,", tab[i]);
	return (0);
}

