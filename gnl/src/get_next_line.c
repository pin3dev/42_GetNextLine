/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:07:50 by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/08 22:46:09 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/get_next_line.h"

char *get_next_line(int fd) 
{
    static char *fullData[OPEN_MAX]; 
    char *line;

    if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
        return NULL;

    fullData[fd] = fullData_storage(fd, fullData[fd]);
    if (!fullData[fd] || !*fullData[fd])
        return NULL;

    line = next_line_mining(fullData[fd]);
    if (!line)
        return NULL;

    int i = 0;
    while (fullData[fd][i] && fullData[fd][i] != '\n')
        i++;
    fullData[fd] = trim_FullData(fullData[fd], i);

    return line;
}

/* char *get_next_line(int fd)
{
    static char *fullData;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    fullData = fullData_storage(fd, fullData);
    if (!fullData || !*fullData)
        return NULL;

    line = next_line_mining(fullData);
    if (!line)
        return NULL;

    int i = 0;
    while (fullData[i] && fullData[i] != '\n')
        i++;
    fullData = trim_FullData(fullData, i);

    return line;
} */