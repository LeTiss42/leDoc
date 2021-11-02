/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:56:11 by mravera           #+#    #+#             */
/*   Updated: 2021/09/15 15:09:29 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 1)
		res = res * --nb;
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;

	printf("res = %i\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
