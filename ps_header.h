/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:09:31 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 15:55:01 by chee-lim         ###   ########.fr       */
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
}	t_stk;

void	ps_bench(char *str, int *bench);
int		ps_args(int c, char *s[], int (**algo)(t_stk *, t_stk *, int), int *b);
int		ps_idarg(char *str, int (**algo)(t_stk *, t_stk *, int), int *bench);

t_node	*ps_fillnode(char *s, t_node *prev);
int		ps_fillstack(int c, char *s[], t_stk *sa, int x);
int		ps_clearstack(t_stk *sa);

int		ps_simple(t_stk *sa, t_stk *sb, int bench);
int		ps_medium(t_stk *sa, t_stk *sb, int bench);
int		ps_complex(t_stk *sa, t_stk *sb, int bench);
int		ps_adaptive(t_stk *sa, t_stk *sb, int bench);

void	ps_stk_list(t_stk *sa);
void	ps_stk_list_bk(t_stk *sa);

#endif
