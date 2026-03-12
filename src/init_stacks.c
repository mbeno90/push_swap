/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvai <bmorvai@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:32:09 by bmorvai           #+#    #+#             */
/*   Updated: 2026/03/12 13:44:20 by bmorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stacks(int argc, char **argv, t_stack_node **a)
{
	int	i;

	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!argv)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (argv[i])
	{
		check_numeric(argv[i]);
		add(ft_atoi(argv[i]), a);
		i++;
	}
	check_duplicates(a);
}
