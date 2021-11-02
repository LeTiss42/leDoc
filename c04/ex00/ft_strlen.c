/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:38:05 by mravera           #+#    #+#             */
/*   Updated: 2021/09/13 18:39:25 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	mot[] = "123456789";

	printf("%s\n", mot);
	printf("%d\n", ft_strlen(mot));
	printf("%lu\n", strlen(mot));
	return 0;
}
*/
