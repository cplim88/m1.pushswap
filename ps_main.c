/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:38:04 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 16:04:59 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_idarg(char *str, int (**algo)(int, int), int *bench)
{
	if (ft_strnstr(str, "simple", ft_strlen(str)) != NULL)
	{
		*algo = ps_simple;
		return (1);
	}
	if (ft_strnstr(str, "medium", ft_strlen(str)) != NULL)
	{
		*algo = ps_medium;
		return (1);
	}
	if (ft_strnstr(str, "complex", ft_strlen(str)) != NULL)
	{
		*algo = ps_complex;
		return (1);
	}
	if (ft_strnstr(str, "bench", ft_strlen(str)) != NULL)
	{
		*bench = 1;
		return (1);
	}
	return (-1);
}

int	main(int argc, char *argv[])
{
	int		(*algo)(int, int);
	int		bench;
	int		x;	

	x = 1;
	bench = 0;
	algo = ps_adaptive;
	while (x < argc && ft_strnstr(argv[x], "--", ft_strlen(argv[x])) != NULL)
	{
		if (ps_idarg(argv[x], &algo, &bench) == -1)
		{
			ft_putendl_fd("invalid arguments", 1);
			break ;
		}
		x++;
	}
	ft_putnbr_fd(bench, 1);
	ft_putendl_fd("\n", 1);
	algo(1,1);
	ft_putendl_fd("\n", 1);	
}
