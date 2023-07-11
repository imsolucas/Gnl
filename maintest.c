/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:39:11 by djin              #+#    #+#             */
/*   Updated: 2023/07/11 05:20:57 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*buff;
	int		fd;

	fd = open("file1.txt", O_RDWR);
	buff = get_next_line(fd);
	printf("%s", buff);
	buff = get_next_line(fd);
	printf("%s", buff);
	buff = get_next_line(fd);
	printf("%s", buff);
	buff = get_next_line(fd);
	printf("%s", buff);
	buff = get_next_line(fd);
	printf("%s", buff);
}
