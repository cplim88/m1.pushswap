/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo3_complex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:38:12 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 10:58:08 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_complex(t_stk *sa, t_stk *sb, int bench)
{
	ft_putstr_fd("[bench] strategy: Complex\n", STDERR_FILENO);
	ft_putstr_fd("am in complex\n", STDOUT_FILENO);
	bench = 2;
	sa->size = 1;
	sb->size = 2;
	return (1);
}
