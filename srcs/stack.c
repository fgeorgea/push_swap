/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:17:20 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/23 17:46:51 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_global *g)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (g->argv[i])
	{
		nbr = ft_atoi(g->argv[i]);
		ft_lstadd_back_stack(&g->a, ft_lstnew_stack(nbr, g), g);
		if (g->is_split == 1)
			free(g->argv[i]);
		i++;
	}
	free(g->argv);
}
