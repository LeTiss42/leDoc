/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:06:19 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:07:54 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_basev(char *res, unsigned long long nbr, char *base)
{
	unsigned long long	dix;
	unsigned long long	x;
	unsigned long long	i;
	char				temp[34];

	dix = ft_strlen_unsigned(base);
	i = 0;
	if (nbr == 0)
		res[0] = base[0];
	if (nbr == 0)
		return ;
	if (nbr > 0)
		x = nbr;
	while (x > 0)
	{
		temp[i++] = base[x % dix];
		x = x / dix;
	}
	while (i-- > 0)
		res[x++] = temp[i];
}
