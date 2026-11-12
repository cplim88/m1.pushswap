/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo1_simple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:37:28 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 16:28:47 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_simple(int sa, int sb)
{
	ft_putstr_fd("[bench] strategy: Simple", STDERR_FILENO);
	ft_putnbr_fd(sa, 1);
	ft_putnbr_fd(sb, 1);
	ft_putstr_fd("am in simple", 1);

	return (1);
}