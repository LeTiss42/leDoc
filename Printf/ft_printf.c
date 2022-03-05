/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:05:47 by mathis            #+#    #+#             */
/*   Updated: 2022/03/06 00:16:50 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *obj, ...)
{
	va_list	lst;
	int		count;

	va_start(lst, obj);
	count = 0;
	while (*obj)
	{
		if (*obj == '%')
		{
			obj++;
			count = count + is_arg(obj, lst);
		}
		else
		{
			write(1, obj, 1);
			count++;
		}
		obj++;
	}
	va_end(lst);
	return (count);
}

/*
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	void	*ptr;

	(void) argc;
	(void) argv;
	printf(" || test->nbr ==> [%i]", printf("1  test ==> [%c]", '*'));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("1  mien ==> [%c]", '*'));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("2  test ==> [%s]", "testducu"));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("2  mien ==> [%s]", "testducu"));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("3  test ==> [%p]", &ptr));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("3  mien ==> [%p]", &ptr));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("4  test ==> [%d]", 0));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("4  mien ==> [%d]", 0));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("5  test ==> [%i]", -11));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("5  mien ==> [%i]", -11));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("6  test ==> [%u]", -6));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("6  mien ==> [%u]", -6));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("9  test ==> [%%]"));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("9  mien ==> [%%]"));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("lui %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("moi %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("\n\n");
	printf(" || test->nbr ==> [%i]", printf("test %p %p ", 0, 0));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("mien %p %p ", 0, 0));
	return (0);
}
*/