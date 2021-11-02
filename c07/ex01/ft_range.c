/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:38:49 by mravera           #+#    #+#             */
/*   Updated: 2021/09/22 14:53:20 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int				*ptr;
	unsigned int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max;
	size -= min;
	ptr = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	*res;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	min = 0;
	max = 5;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	res = ft_range(min, max);
	(void) argc;
	if (min < max)
	{
		size = (max - min);
		while (i < size)
			printf("res = %i\n", res[i++]);
	}
	printf("ptr = %p\n", res);
	return (0);
}
*/
