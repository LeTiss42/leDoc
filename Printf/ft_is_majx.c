/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_majx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:36:57 by mathis            #+#    #+#             */
/*   Updated: 2022/03/05 14:54:34 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_majx(va_list lst)
{
	unsigned int	x;
	size_t			i;
	char			*res;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, unsigned int);
	ft_putnbr_base_ui(res, x, "0123456789ABCDEF");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	free(res);
	return (i);
}
