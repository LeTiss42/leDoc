/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:23:26 by mathis            #+#    #+#             */
/*   Updated: 2022/03/05 13:48:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_c(va_list lst)
{
	int	x;

	x = va_arg(lst, const int);
	return (write(1, &x, 1));
}
