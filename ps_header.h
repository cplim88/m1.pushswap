/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:09:31 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 20:01:12 by chee-lim         ###   ########.fr       */
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

typedef struct s_node
{
	int				value;
	int				rank;
	struct s_node	*next;
	struct s_node	*prev;	
}	t_node;

typedef struct s_stack
{
	struct s_node	*top;
	int				size;
}	t_stack;

int	ps_simple(t_stack sa, t_stack sb, int bench);
int	ps_medium(t_stack sa, t_stack sb, int bench);
int	ps_complex(t_stack sa, t_stack sb, int bench);
int	ps_adaptive(t_stack sa, t_stack sb, int bench);

#endif
