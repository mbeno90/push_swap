/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvai <bmorvai@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:32:04 by bmorvai           #+#    #+#             */
/*   Updated: 2026/03/12 14:53:19 by bmorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_numeric(char *argument)
{
	int	i;

	i = 0;
	if (argument[0] == '-' || argument[0] == '+')
		i = 1;
	while (argument[i])
	{
		if (!ft_isdigit(argument[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	check_overflow(long number)
{
	if (INT_MIN > number || number > INT_MAX)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	check_duplicates(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*checker;

	current = *stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (checker->value == current->value)
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			checker = checker->next;
		}
		current = current->next;
	}
}
