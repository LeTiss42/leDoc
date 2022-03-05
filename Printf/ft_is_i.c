/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:36:51 by mathis            #+#    #+#             */
/*   Updated: 2022/03/05 23:50:27 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_i(va_list lst)
{
	int		x;
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)calloc(1, 34 * sizeof(char));
	x = va_arg(lst, const int);
	ft_putnbr_base(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	free(res);
	return (i);
}
