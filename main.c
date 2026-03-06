#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node *a;
    t_stack_node *b;
    int i;

    a = NULL;
    b = NULL;

    i = 1;

    while (argv[i])
    {
        check_numeric((argv[i]));
        add(ft_atoi(argv[i]), &a);
        i++;
    }
    check_duplicates(&a);
    print_stack(a);
}

