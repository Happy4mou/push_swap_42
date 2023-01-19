/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:05:27 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/14 17:44:28 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*get_line_r(char *src)
{
	char	*a;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!src[0])
		return (NULL);
	while (src[i] && src[i] != '\n')
		i++;
	if (src[i])
		i++;
	a = malloc(i + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (src[i] && src[i] != '\n')
		a[j++] = src[i++];
	if (src[i] == '\n')
	{
		a[j] = '\n';
		j++;
	}
	a[j] = '\0';
	return (a);
}

char	*get_los(char *src)
{
	char	*a;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\n' && src[i])
		i++;
	if (src[i] == '\0')
	{
		free(src);
		return (NULL);
	}
	a = malloc(ft_strlen(src) - i + 1);
	if (!a)
		return (NULL);
	if (src[i] == '\n')
		i++;
	while (src[i] != '\0')
		a[j++] = src[i++];
	a[j] = '\0';
	free(src);
	return (a);
}

char	*get_next(int fd, char *bufjoin)
{
	char	*buf;
	int		i;

	i = 1;
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (!ft_strchr(bufjoin, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(buf);
			free(bufjoin);
			return (NULL);
		}
		buf[i] = '\0';
		bufjoin = ft_strjoin(bufjoin, buf);
		if (!bufjoin)
			return (NULL);
	}
	free(buf);
	return (bufjoin);
}

char	*get_next_line(int fd, char **tmp)
{
	static char	*r;

	*tmp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	r = get_next(fd, r);
	if (!r)
		return (NULL);
	*tmp = get_line_r(r);
	r = get_los(r);
	return (*tmp);
}
