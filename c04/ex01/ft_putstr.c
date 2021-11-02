/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:41:02 by mravera           #+#    #+#             */
/*   Updated: 2021/09/13 18:42:47 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i++] != 0)
		write(1, &str[i - 1], 1);
}
/*
int main(void)
{
    char    str[] = "Brigitte tu vas bien?\n";

    ft_putstr(str);
}
*/
