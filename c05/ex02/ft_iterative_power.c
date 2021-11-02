/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:19:06 by mravera           #+#    #+#             */
/*   Updated: 2021/09/15 17:36:56 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  **argv)
{
	(void) argc;
	printf("resultat = %i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return(0);
}
*/
