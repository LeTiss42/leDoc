/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:37:04 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:09:57 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_p(va_list lst)
{
	void	*x;
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, void *);
	ft_putnbr_basev(res, (unsigned long long) x, "0123456789abcdef");
	write(1, "0", 1);
	write(1, "x", 1);
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i + 2);
}
