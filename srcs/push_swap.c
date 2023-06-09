/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/24 14:11:45 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_global	g;

	if (argc < 2)
		return (0);
	g.a = NULL;
	g.b = NULL;
	g.argv = NULL;
	ft_init_struct(argc, argv, &g);
	ft_check_arg(&g);
	ft_init_stack(&g);
	ft_fill_index(&g);
	ft_check_if_radix(&g);
	ft_lstclear_stack(&g.a);
	ft_lstclear_stack(&g.b);
	return (0);
}
