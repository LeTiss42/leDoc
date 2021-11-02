/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:08:42 by mravera           #+#    #+#             */
/*   Updated: 2021/09/06 17:44:05 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	if (size <= 0)
		return ;
	size--;
	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - i];
		tab[size - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	int size = 0;
	int tab[0] = {};
	while (i < size)
	{
		printf("%i, ", tab[i++]);
		printf("\n");
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i, ", tab[i++]);
		printf("\n");
	}
	return 0;
}
*/
