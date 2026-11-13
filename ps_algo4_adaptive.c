/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo4_adaptive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:38:23 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 10:58:08 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_adaptive(t_stk *sa, t_stk *sb, int bench)
{
	ft_putstr_fd("[bench] strategy: Adaptive\n", STDERR_FILENO);
	ft_putstr_fd("am in adaptive\n", STDOUT_FILENO);
	bench = 2;
	sa->size = 1;
	sb->size = 2;
	return (1);
}
