#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	init_stacks(argc, argv, &a);
	//print_stack(a);
	if (is_sorted(&a))
		return (0);
	find_min(&a);
	find_index(&a);
	sort(&a, &b, stack_size(&a));
	while (b)
		go_home(&a, &b);
	//print_stack(a);
}
