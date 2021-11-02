/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:14:35 by mravera           #+#    #+#             */
/*   Updated: 2021/09/09 15:06:44 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello Philou";
	char src2[] = "Hello Philou";
	char dest[] = "HHHHHHHHHHHHHHHHHHHHHH";
	char dest2[] = "HHHHHHHHHHHHHHHHHHHHHH";
	
	strcpy(dest, src);
	ft_strcpy(dest2, src2);

	printf("y'a ecrit : 
	[%s] taille dest = [%lu], taille src = [%lu]\n",
	strcpy(dest, src), sizeof(dest), sizeof(src));
	printf("y'a ecrit : 
	[%s] taille dest2 = [%lu], taille src2 = 
	[%lu]\n", ft_strcpy(dest2, src2), sizeof(dest2), sizeof(src2));
	return (0);
}
*/
