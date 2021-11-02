/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:44:25 by mravera           #+#    #+#             */
/*   Updated: 2021/09/13 13:05:07 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		else if (*s1 == *s2)
		{
			s2++;
			s1++;
		}
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char	*s1 = "oui";
	char	*s2 = "oui\200";

	printf("s1 = [%s]\n", s1);
	printf("s2 = [%s]\n", s2);
	printf("tot= [%i]\n", ft_strcmp(s1, s2));
	printf("tot= [%i]\n", strcmp(s1, s2));
	return (0);
}
*/
