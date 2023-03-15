/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:53:27 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 19:46:16 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_global *g)
{
	write(1, "Error\n", 6);
	if (g->argv)
		free(g->argv);
	if (g->a)
		ft_lstclear_stack(&g->a);
	if (g->b)
		ft_lstclear_stack(&g->b);
	exit(EXIT_FAILURE);
}

static void	ft_string_arg(t_global *g, char **argv)
{
	int	i;

	i = 0;
	g->argv = ft_split(argv[1], ' ');
	if (!g->argv)
		ft_error(g);
	while (g->argv[i])
		i++;
	g->argc = i;
}

static void	ft_multiple_arg(t_global *g, char **argv)
{
	int	i;

	i = 1;
	g->argv = malloc(sizeof(char *) * (g->argc + 1));
	if (!g->argv)
		ft_error(g);
	while (argv[i])
	{
		g->argv[i - 1] = argv[i];
		i++;
	}
	g->argv[i - 1] = NULL;
}

void	ft_init_struct(int argc, char **argv, t_global *g)
{
	g->argc = argc - 1;
	if (argc == 2)
		ft_string_arg(g, argv);
	else
		ft_multiple_arg(g, argv);
}
