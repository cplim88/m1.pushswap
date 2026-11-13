/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fn_stk_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:00:36 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 15:51:34 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

void	ps_stk_list(t_stk *sa)
{
	t_node	*cur;

	ft_putstr_fd("Forward\n", 1);
	cur = sa->top;
	while (cur->next != sa->top)
	{
		ft_putnbr_fd(cur->value, 1);
		ft_putendl_fd("", 1);
		cur = cur->next;
	}
	ft_putnbr_fd(cur->value, 1);
	ft_putendl_fd("--", 1);
}

void	ps_stk_list_bk(t_stk *sa)
{
	t_node	*cur;

	ft_putstr_fd("Backward\n", 1);
	cur = sa->top->prev;
	while (cur != sa->top)
	{
		ft_putnbr_fd(cur->value, 1);
		ft_putendl_fd("", 1);
		cur = cur->prev;
	}
	ft_putnbr_fd(cur->value, 1);
	ft_putendl_fd("--", 1);
}
