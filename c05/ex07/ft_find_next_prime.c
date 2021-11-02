/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:24:14 by mravera           #+#    #+#             */
/*   Updated: 2021/09/18 20:41:03 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || (nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	while ((i * i) <= (unsigned int) nb)
	{
		if ((unsigned int) nb % i == 0 || ((unsigned int) nb % (i + 2) == 0))
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s ==> %i\n", argv[1], ft_find_next_prime(atoi(argv[1])));
	return(1);
}
*/
