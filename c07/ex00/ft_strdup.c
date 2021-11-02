/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:42:16 by mravera           #+#    #+#             */
/*   Updated: 2021/09/20 21:32:38 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i] != 0)
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] != 0)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *ptr1;
	char *ptr2;
	char *res1;
	char *res2;

	(void) argc;
	ptr1 = argv[1];
	ptr2 = argv[1];
	res1 = strdup(ptr1);
	res2 = ft_strdup(ptr2);
	printf("lui = %s ==> %lu\n", res1, strlen(res1));
	printf("moi = %s ==> %lu\n", res2, strlen(res2));
	return (0);
}
*/
