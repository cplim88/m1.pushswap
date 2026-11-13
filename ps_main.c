/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:38:04 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 16:12:33 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

void	ps_bench(char *str, int *bench)
{
	if (*bench == 1)
	{
		ft_putstr_fd("[bench] ", STDERR_FILENO);
		ft_putendl_fd(str, STDERR_FILENO);
	}
}

int	ps_idarg(char *str, int (**algo)(t_stk *, t_stk *, int), int *bench)
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

int	ps_args(int c, char *s[], int (**algo)(t_stk *, t_stk *, int), int *b)
{
	int	x;
	int	count;

	x = 1;
	count = 0;
	while (x < c && ft_strnstr(s[x], "--", ft_strlen(s[x])) != NULL)
	{
		if (ps_idarg(s[x], algo, b) == 1)
			x++;
		else
			count++;
		x++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	int		(*algo)(t_stk *, t_stk *, int);
	int		bench;
	int		result;
	t_stk	sa;	

	bench = 0;
	ft_memset(&sa, 0, sizeof(t_stk));
	algo = ps_adaptive;
	if (argc < 2)
		return (1);
	result = ps_args(argc, argv, &algo, &bench);
	if (result > 0)
		ps_bench("Invalid Flags Found", &bench);
	result = ps_fillstack(argc, argv, &sa, 1);
	if (result == -1)
		return (-1);
	ps_stk_list (&sa);
	ps_stk_list_bk (&sa);
	ft_putstr_fd ("Size of Stack A = ", 1);
	ft_putnbr_fd (sa.size, 1);
	ft_putendl_fd ("", 1);
}
