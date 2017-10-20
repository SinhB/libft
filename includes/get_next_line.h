/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <ybecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:54:15 by ybecret           #+#    #+#             */
/*   Updated: 2017/10/20 15:32:51 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

typedef struct			s_fd
{
	char				*buff;
	int					fd;
	struct s_fd			*next;
}						t_fd;

int						get_next_line(const int fd, char **line);

#endif
