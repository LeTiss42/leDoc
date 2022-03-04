/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:37:19 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:09:36 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_u(va_list lst)
{
	unsigned int	x;
	char			*res;
	size_t			i;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, const unsigned int);
	ft_putnbr_base_ui(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}