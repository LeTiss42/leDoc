/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:53:14 by mravera           #+#    #+#             */
/*   Updated: 2021/09/22 22:00:22 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) < (unsigned int) nb)
		i++;
	if ((i * i) > (unsigned int) nb)
		return (0);
	return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;

	i = 0;
	//while (i++ < 2000)
	//	printf("%i\n", ft_sqrt(2147395600));
	
	printf("sqrt of %d is %d\n", -3760, ft_sqrt(-3760));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483647, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 1144062976, ft_sqrt(1144062976));
	printf("sqrt of %d is %d\n", 403399600, ft_sqrt(403399600));
	printf("sqrt of %d is %d\n", 1852441600, ft_sqrt(1852441600));
	printf("sqrt of %d is %d\n", 1443874313, ft_sqrt(1443874313));
	printf("sqrt of %d is %d\n", 920515600, ft_sqrt(920515600));
	printf("sqrt of %d is %d\n", 1560093554, ft_sqrt(1560093554));
	printf("sqrt of %d is %d\n", 757680676, ft_sqrt(757680676));
	printf("sqrt of %d is %d\n", 881106011, ft_sqrt(881106011));
	printf("sqrt of %d is %d\n", 1322485956, ft_sqrt(1322485956));
	printf("sqrt of %d is %d\n", 637139111, ft_sqrt(637139111));	
	
	return (0);
}

