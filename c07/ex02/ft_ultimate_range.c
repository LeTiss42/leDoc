/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:06:33 by mravera           #+#    #+#             */
/*   Updated: 2021/09/23 22:13:13 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	size;
	int				*ptr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = (max - min);
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == 0)
		return (-1);
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (size);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int				min;
	int				max;
	int				**range;
	int				*ptr;
	unsigned int	i;
	unsigned int	size;

	(void) argc;
	i = 0;
	min = 0;
	max = 5;
	min = atoi(argv[1]);
	max = atoi(argv[2]);

	range = &ptr;
	size = ft_ultimate_range(range, min, max);
	printf("size = %i\n", size);
	if (max > min)
	{
		size = (max - min);
		while (i < size)
			printf("range = %i\n", ptr[i++]);
	}
	printf("range = %p\n", range);
	printf("*range = %p\n", *range);

	return (0);
}

