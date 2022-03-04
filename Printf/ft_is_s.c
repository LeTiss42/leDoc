/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:37:15 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 11:39:49 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_s(va_list lst)
{
	char const	*x;
	size_t		i;

	i = 0;
	x = va_arg(lst, const char *);
	if (x == NULL)
		x = "[errNULL]";
	while (x[i])
	{
		write(1, &x[i], 1);
		i++;
	}
	return (i);
}
