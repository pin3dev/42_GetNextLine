/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:02:26 by pin3dev           #+#    #+#             */
/*   Updated: 2024/10/09 00:04:41 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/get_next_line.h"

char *fullData_storage(int fd, char *fullData)
{
    char buffer[BUFFER_SIZE + 1];
    int bytes_read;

    if (!fullData)
    {
        fullData = ft_strdup("");
        if (!fullData)
            return NULL;
    }

    while (!ft_strchr(fullData, '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
                free(fullData);
                fullData = NULL;
                return(NULL);
        }

        if (bytes_read == 0 && *fullData == '\0')
        {
            free(fullData);
            return NULL;
        }
        if (bytes_read == 0)
            break;
        buffer[bytes_read] = '\0';
        char *tmp = fullData;
        fullData = ft_strjoin(fullData, buffer);
        free(tmp);
        if (!fullData)
            return NULL;
    }
    return fullData;
}

char *next_line_mining(char *fullData)
{
    int len = 0;
    char *line;

    while (fullData[len] && fullData[len] != '\n')
        len++;
    if (fullData[len] == '\n')
        len++;
    line = ft_substr(fullData, 0, len);
    return line;
}

char *trim_FullData(char *fullData, int i)
{
    char *trimData = NULL;
    if (fullData[i])
    {
        trimData = ft_strdup(&fullData[i + 1]);
        if (!trimData)
            return NULL;
    }
    free(fullData);
    return trimData;
}
