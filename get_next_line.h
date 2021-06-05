/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorefto <lhorefto@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:37:43 by lhorefto          #+#    #+#             */
/*   Updated: 2021/06/05 12:37:44 by lhorefto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define O_MAX 1024
# define BUFF_MAX 99999

int		get_next_line(int fd, char **line);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif