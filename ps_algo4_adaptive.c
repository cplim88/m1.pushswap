/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo4_adaptive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:38:23 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 16:28:59 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_adaptive(int sa, int sb)
{
	ft_putstr_fd("[bench] strategy: Adaptive", STDERR_FILENO);		
	ft_putnbr_fd(sa, 1);
	ft_putnbr_fd(sb, 1);
	ft_putstr_fd("am in adaptive", 1);

	return (1);
}