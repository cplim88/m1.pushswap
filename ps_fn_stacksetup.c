/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fn_stacksetup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:04:11 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/12 20:25:22 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

int	ps_fillstack(t_stack *sa, t_stack *sb, char *s, int bench)
{
	int		x;
	t_node	*new;

	x = ft_atoi(s);
	if (x == 0)
	{
		ps_clearstack(sa);
		return (-1);
	}
	new = malloc(sizeof(t_node));
	if (new == NULL)
	{
		ps_clearstack(sa);
		return (-1);
	}
	new->value = x;
	if (sa->top == NULL)
	{
		sa->top = new;
		sa->size = 1;
	}
	


}

int	ps_clearstack(t_stack *sa)
{
	int	x;

	x = 1;
}