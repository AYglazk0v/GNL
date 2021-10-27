/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <gtaggana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:48:54 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/27 21:59:48 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024	
# endif

# ifndef MAX_FD
#  define MAX_FD 1024	
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t		ft_strlen(char *s);
char		*ft_strchr(char *string, int symbol);
char		*ft_strjoin(char *s1, char *s2);
char		*get_next_line(int fd);
char		*ft_read_file(int fd, char *balance_line);
char		*ft_get2n(char *balance_line);
char		*ft_get_nbalance(char *balance_line);

#endif
