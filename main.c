/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvai <bmorvai@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:33:36 by bmorvai           #+#    #+#             */
/*   Updated: 2026/03/12 18:04:25 by bmorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	init_stacks(argc, argv, &a);
	if (is_sorted(&a))
		return (0);
	find_min(&a);
	find_index(&a);
	sort(&a, &b, stack_size(&a));
	while (b)
		go_home(&a, &b);
	free_stack(&a);
	free_stack(&b);
}
