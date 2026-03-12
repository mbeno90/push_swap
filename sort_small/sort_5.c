#include "../push_swap.h"

void sort_five(t_stack_node **a, t_stack_node **b)
{
    int distance_from_top;
    int distance_from_bottom;
    int pushes;

    pushes = 2;
    while (pushes--)
    {
    distance_from_top = distance(a, find_min_i);
    distance_from_bottom = stack_size(a) - distance_from_top;
    if (distance_from_top <= distance_from_bottom)
        while (distance_from_top-- != 0)
            ra(a);
    else
        while (distance_from_bottom-- != 0)
            rra(a);
    pb(a, b);
    }
    sort_three(a, b);
    pa(a, b);
    pa(a, b);
}