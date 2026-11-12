/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:38:04 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 20:33:46 by chee-lim         ###   ########.fr       */
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
	int		(*algo)(t_stack, t_stack, int);
	int		bench;
	int		x;
	t_stack	sa;
	t_stack	sb;

	x = 1;
	bench = 0;
	algo = ps_adaptive;
	if (argc < 2)
		return (1);
	while (x < argc && ft_strnstr(argv[x], "--", ft_strlen(argv[x])) != NULL)
	{
		if (ps_idarg(argv[x], &algo, &bench) == 1)
			x++;
		else
			break ;
	}
	while (x < argc)
		ps_fillstack(&sa, &sb, argv[x], bench);
	if (sa.top != NULL)
		algo (sa, sb, bench);
}
