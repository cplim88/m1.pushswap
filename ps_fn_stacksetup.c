/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fn_stacksetup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chee-lim <chee-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:04:11 by chee-lim          #+#    #+#             */
/*   Updated: 2026/11/13 15:43:51 by chee-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_header.h"

t_node	*ps_fillnode(char *s, t_node *prev)
{
	int		val;
	t_node	*new;

	val = ft_atoi(s);
	if (val == 0 && ft_strlen(s) > 2)
		return (NULL);
	new = malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->value = val;
	new->prev = prev;
	new->next = NULL;
	return (new);
}

int	ps_fillstack(int c, char *s[], t_stk *sa, int x)
{
	t_node	*new;
	t_node	*cur;

	cur = NULL;
	while (x < c)
	{
		if (ft_strnstr(s[x], "--", ft_strlen(s[x])) != NULL)
			x++;
		else
		{
			new = ps_fillnode(s[x++], cur);
			if (new == NULL)
				return (-1);
			if (sa->top == NULL)
				sa->top = new;
			else
				cur->next = new;
			cur = new;
			sa->size++;
		}
	}
	cur->next = sa->top;
	sa->top->prev = cur;
	return (1);
}

int	ps_clearstack(t_stk *sa)
{
	int	x;

	x = 1;
	sa->size = 1;
	return (1);
}
