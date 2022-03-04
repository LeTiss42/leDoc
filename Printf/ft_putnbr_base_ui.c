/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ui.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:18 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:33:35 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_ui(char *res, unsigned int nbr, char *base)
{
	unsigned int	dix;
	unsigned int	x;
	unsigned int	i;
	char			temp[34];

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
