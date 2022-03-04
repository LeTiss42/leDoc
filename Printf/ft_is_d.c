/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:36:44 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:11:37 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_d(va_list lst)
{
	int		x;
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, const int);
	ft_putnbr_base(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}
