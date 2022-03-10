/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:40:50 by mathis            #+#    #+#             */
/*   Updated: 2022/03/09 21:56:11 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	
}

#include <fcntl.h>

int	main(void)
{
	int		fd;

	fd = open("test.txt", O_RDONLY);
	printf("1 : %s\n", get_next_line(fd));
	printf("1 : %s\n", get_next_line(fd));
	printf("1 : %s\n", get_next_line(fd));
	printf("1 : %s\n", get_next_line(fd));
	printf("1 : %s\n", get_next_line(fd));
	return (1);
}
