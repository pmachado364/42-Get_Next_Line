/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmachado <pmachado@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:24:46 by pmachado          #+#    #+#             */
/*   Updated: 2024/06/19 11:24:46 by pmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef OPENF_MAX
#  define OPENF_MAX 1024
# endif

// Function prototypes
char	*get_next_line(int fd);
char	*ft_read_function(int fd, char *store_data);
char	*ft_extractline(char *store_data);
char	*ft_update_remainder(char *store_data);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_free_data(char *stash, char *buffer);
size_t	ft_strlen(const char *str);

#endif