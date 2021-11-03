/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:17:08 by mravera           #+#    #+#             */
/*   Updated: 2021/10/28 11:40:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%i ==> %c\n", argv[1][0], toupper(argv[1][0]));
	printf("%i ==> %c", argv[1][0], ft_toupper(argv[1][0]));
	return (0);
}
*/
