/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:09:31 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 15:08:36 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_HEADER_H
# define PS_HEADER_H
# define SIMPLE 1
# define MEDIUM 2
# define COMPLEX 4
# define ADPATIVE 8
# define BENCH 16

# include <unistd.h>
# include "libft/libft.h"

int	ps_simple(int sa, int sb);
int	ps_medium(int sa, int sb);
int	ps_complex(int sa, int sb);
int	ps_adaptive(int sa, int sb);

#endif
